`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:			SergLetFPGA_Development
// Engineer:		Akatla Arbuzov
// 
// Create Date:    20:14:19 06/22/2017 
// Design Name: 	 First programmable state machine (CPU) 
// Module Name:    my_FCPU 
// Project Name: 	 FPSM_LSV
// Target Devices: SPARTAN 6
// Tool versions:  1.0
// Description: 	 First attempt to create FPSM module
//
// Dependencies: 	 Alex S.
//
// Revision:		 2.1.0
// Revision 0.04 - File Created
// Additional Comments: none.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
module my_FCPU
			( 
				clk,								
				BUT1,
				BUT2,
				DATA_OUT
			);
			input	 clk;
			input	BUT1;
			input BUT2;			
			output [14:0]DATA_OUT;

reg [6:0]digits_rom[15:0];

initial begin
			digits_rom[0] = 7'b1111110; 	// 0			
			digits_rom[1] = 7'b0110000; 	// 1
			digits_rom[2] = 7'b1101101; 	// 2		
			digits_rom[3] = 7'b1111001; 	// 3
			digits_rom[4] = 7'b0110011; 	// 4
			digits_rom[5] = 7'b1011011; 	// 5
			digits_rom[6] = 7'b1011111; 	// 6			
			digits_rom[7] = 7'b1110000; 	// 7
			digits_rom[8] = 7'b1111111; 	// 8
			digits_rom[9] = 7'b1111011; 	// 9						
			digits_rom[10] = 7'b1110111; 	// A			
			digits_rom[11] = 7'b0011111; 	// B			
			digits_rom[12] = 7'b1001110; 	// C
			digits_rom[13] = 7'b0111101; 	// D
			digits_rom[14] = 7'b1001111; 	// E		
			digits_rom[15] = 7'b1000111; 	// F
end

// Registers section.
reg [7:0]R0  = 8'b0000_0000;
reg [7:0]R1  = 8'b0000_0000;
reg [7:0]R2  = 8'b0000_0000;
reg [7:0]R3  = 8'b0000_0000;		
reg [2:0]FLAG = 3'b000;
reg [7:0]PC  = 8'b1111_1111; 		// Since the memory is synchronous we put FF in PC register.
reg [7:0]IRcomm = 8'b1111_1111;
reg pls = 1'b1;
reg [3:0]row = 4'b1110;
reg readyCPU = 1'b0;
reg TTtrg = 1'b0;

wire in_BUT1;
wire in_BUT2;
wire [3:0]Connect_MUX;
wire [15:0]Connect_MUXTWO; 
wire [7:0]PC_adder;
wire [7:0]mch_WORD;
wire [7:0]mch_WORDB;
wire is_cnt;
wire is_dynamic;
wire pullunb;
wire dpmgc;
wire [7:0]SRCA;
wire [7:0]SRCB;
wire [1:0]target = IRcomm[3:2];

wire pcwr = (IRcomm[7:5] == 3'b010) & (IRcomm[1] == 1'b1);								// jump 					010_x_xx1x				0100_0010 Hx 42 !!!
wire jmpZ = (IRcomm[7:4] == 4'b0101) & (IRcomm[1] == 1'b1);								// Ñonditional jump	0101_xx1x ADDRR JMZ. 0101_0000 Hx 52 !!!
wire jmpS = (IRcomm[7:3] == 5'b01011) & (IRcomm[1] == 1'b1); 							// Ñonditional jump	0101_1x1x ADDRR JMS. 0101_1010 Hx 5A !!!
wire jmpC = (IRcomm[7:1] == 6'b0101111); 														// Ñonditional jump	0101_111x ADDRR JMC. 0101_1110 Hx 5E !!!

wire [3:0]DCWR = {3'b000, {readyCPU & TTtrg & !pcwr}} << target;

// Assign section.
assign DATA_OUT[13:11] = ~DCWR[3:1]; // Now we can see how it works.
assign DATA_OUT[14] 	= ~jmpS;
assign DATA_OUT[3:0] = row[3:0];
assign PC_adder[7:0] = PC[7:0] + pls;

assign SRCA = (IRcomm[1:0] == 2'b00) ? R0 : (IRcomm[1:0] == 2'b01) ? R1 : (IRcomm[1:0] == 2'b10) ? R2 : R3;
assign SRCB = (IRcomm[3:2] == 2'b00) ? R0 : (IRcomm[3:2] == 2'b01) ? R1 : (IRcomm[3:2] == 2'b10) ? R2 : R3;



// List of FPSM commands.
wire [8:0]adder = SRCA + SRCB;
wire [7:0]suber = SRCB + (~SRCA + 1);
wire [7:0]muller = SRCA * SRCB;
wire [7:0]devidd = SRCB / SRCA;
wire [7:0]moddd = SRCB % SRCA;
wire [7:0]stepen = SRCA ^ SRCB;

// Commands package.
// 8-bit 4-wire multiplexer.
wire [7:0]muxSrc[7:0] = {
									stepen[7:0],	// 7	111 // del
									moddd[7:0],		// 6	110 // del
									devidd[7:0],	// 5	101 // del 
									muller[7:0],	// 4	100 // del								
									suber[7:0],		// 3  011 // del
									mch_WORD[7:0],	// 2  010 // 
									adder[7:0],		// 1  001 // 
									SRCA[7:0]		// 0  000 // 
								};

// IRcomm[7:6] conductor indices [3:0] - 00 01 10 11. 
wire [7:0]SourceC = muxSrc[IRcomm[7:5]][7:0]; 

// List of flags
wire C = adder[8];
wire Z = !(|SourceC);
wire S = SourceC[7];

// Mux - display.
wire [1:0]selectorDg = {in_BUT1,in_BUT2}; 
wire [3:0]Digit1 = (selectorDg == 2'b11) ? IRcomm[3:0] : (selectorDg == 2'b10) ? R3[3:0] : (selectorDg == 2'b01) ? R1[3:0] : 4'd0;
wire [3:0]Digit2 = (selectorDg == 2'b11) ? IRcomm[7:4] : (selectorDg == 2'b10) ? R3[7:4] : (selectorDg == 2'b01) ? R1[7:4] : 4'd0;
wire [3:0]Digit3 = (selectorDg == 2'b11) ? PC[3:0] : 		(selectorDg == 2'b10) ? R2[3:0] : (selectorDg == 2'b01) ? R0[3:0] : 4'd0;
wire [3:0]Digit4 = (selectorDg == 2'b11) ? PC[7:4] : 		(selectorDg == 2'b10) ? R2[7:4] : (selectorDg == 2'b01) ? R0[7:4] : 4'd0;

// Mux 4:4 -> 1:4
assign Connect_MUX[3:0] = (row[3:0] == 4'b1110) ? Digit2 :
									(row[3:0] == 4'b1101) ?  Digit1 :
									 (row[3:0] == 4'b1011) ? Digit4 : Digit3;
								 
// Seven segment decoder.
assign DATA_OUT[10:4] = (selectorDg == 2'b00) ? R1[7:1] : digits_rom[Connect_MUX][6:0];

// BRAM section port A and B.
RAM8 BRAM_progg( .data_a(8'b0000_0000), 
							.data_b(8'b0000_0000), 
								.addr_a({3'b000,PC}), 
									.addr_b({11'b000_0000_0000}), 
										.we_a(1'b0), 
											.we_b(1'b0), 
												.clk(clk), 
												.q_a(mch_WORD), 
													.q_b(mch_WORDB) );

deviefive fvDev( .clk(clk), .CLK100Hz(is_dynamic), .CLKCPU(is_cnt), .CLK1kHz(pullunb) );

UnBounceBB ubnc_a( .iclk(pullunb), .iin(BUT1), .iout(in_BUT1) );

UnBounceBB ubnc_b( .iclk(pullunb), .iin(BUT2), .iout(in_BUT2) );

	// Dynamic counter.
	always @(posedge is_dynamic) begin
			  row <= {row[2:0], row[3]};
			  end

wire twoByte = (mch_WORD[7:5] == 3'b010);
wire jmpCondition =  (jmpC == 1'b1) ? FLAG[0] : (jmpS == 1'b1) ? FLAG[1] : (jmpZ == 1'b1) ? FLAG[2] : pcwr;

	// PC counter.
	always @(posedge is_cnt) begin				

		readyCPU <= 1'b1;		
		
		if(readyCPU) TTtrg <= ~TTtrg;

		if( (TTtrg == 1) | ((TTtrg == 0) && twoByte) ) begin 
		  PC[7:0] <= (jmpCondition) ? mch_WORD[7:0] : PC_adder[7:0];
		end;
		
		if(!TTtrg) begin		
			IRcomm <= mch_WORD;			
		end;
	
	   if(PC[7:0] == 8'b1000_0000) begin		
		 pls <= 1'b0; // Don't forget that this is a MF trigger! Click!
		end;
		
		if(TTtrg & !pcwr) begin			
			FLAG[2] <= Z;			
			FLAG[1] <= S;
			FLAG[0] <= C;
		end;
		// b0000_0011 b0100_0100 h03_42 JMP 03 JMP Command.
		
		if(DCWR[0]) begin 
			R0 <= SourceC;
		end;
		
		if(DCWR[1]) begin 
			R1 <= SourceC;
			end;
			
		if(DCWR[2]) begin 
			R2 <= SourceC;
		end;		

		if(DCWR[3]) begin 
			R3 <= SourceC;
		end;	
		
	end
	
endmodule
