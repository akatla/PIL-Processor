using System.Collections;
using System.IO;
using System;

namespace WindowsFormsApplication1
{
    public class FlReaderPIL
    {
        ArrayList dataCommands = new ArrayList();
        StreamReader fdsr = null;
        StreamWriter fdsw = null;
        string cs = string.Empty;

        public bool CheckFileIsExist(string path)
        {
            bool rz = false;

            try
            {
                rz = File.Exists(path);
            }
            catch(Exception ff)
            {
                System.Diagnostics.Debug.WriteLine(ff.Message);
                rz = false;
            }

            return rz;
        }

        public void ReadCommandFile(string path)
        {
            try
            {
                fdsr = new StreamReader(path);

                while ((cs = fdsr.ReadLine()) != null)
                {
                    dataCommands.Add(cs);
                }
            }
            catch(Exception fex)
            {
                System.Diagnostics.Debug.WriteLine(fex.Message);
            }
            finally
            {
                if (fdsr != null)
                {
                    fdsr.Close();
                }
            }
        }

        public void WriteCommandFile(string path)
        {
            try
            {
                fdsw = new StreamWriter(path);

                foreach (string s in dataCommands)
                {
                    fdsw.WriteLine(s);
                }
            }
            catch (Exception fer)
            {
                System.Diagnostics.Debug.WriteLine(fer.Message);
            }
            finally
            {
                if (fdsw != null)
                {
                    fdsw.Flush(); 
                    fdsw.Close();
                }
            }
        }

        public void WriteCommandFile(string path, ArrayList istoch)
        {
            try
            {
                fdsw = new StreamWriter(path);

                foreach (string s in istoch)
                {
                    fdsw.WriteLine(s);
                }
            }
            catch (Exception fer)
            {
                System.Diagnostics.Debug.WriteLine(fer.Message);
            }
            finally
            {
                if (fdsw != null)
                {
                    fdsw.Flush();
                    fdsw.Close();
                }
            }
        }

        public void WriteCommandFile(string path, string wrr)
        {
            try
            {
                fdsw = new StreamWriter(path);

                fdsw.WriteLine(wrr);
            }
            catch (Exception fer)
            {
                System.Diagnostics.Debug.WriteLine(fer.Message);
            }
            finally
            {
                if (fdsw != null)
                {
                    fdsw.Flush();
                    fdsw.Close();
                }
            }
        }

        public ArrayList GetCommandList()
        {
            return dataCommands;
        }

        public void SetCommandList(ArrayList r)
        {
            dataCommands.AddRange(r);
        }
    }

    public class Generator
    {
        private ArrayList arr = null;
        string BRAMhead = ".INITP_";
        string BRAMheadTwo = "(256'h";        
        int BRAMhead_num_string = 0;
        int nStr = 0;
        int bRAMCount = 0;

        string[] mantra = {   
                              "0000~0", 
                              "0001~1", 
                              "0010~2", 
                              "0011~3", 
                              "0100~4", 
                              "0101~5", 
                              "0110~6", 
                              "0111~7", 
                              "1000~8", 
                              "1001~9", 
                              "1010~A", 
                              "1011~B", 
                              "1100~C", 
                              "1101~D", 
                              "1110~E", 
                              "1111~F" 
                          };

        int nuMofStep = 0;

        public Generator()
        {

        }

        #region AllFunction

        public ArrayList GeneratorBinaryPIL()
        {
            arr = new ArrayList();

            for (int i = 0; i <= 255; i++)
            {
                arr.Add(IntToBin_string(i));
            }

            return arr;
        }

        private string IntToBin_string(int x)
        {
            int z = 0;
            string s = string.Empty;
            string b = string.Empty;

            while (x > 0)
            {
                z = x % 2;
                x = x / 2;

                if (z.ToString().Length < 8)
                {
                    s = z.ToString() + s;
                }

            }
                b += s;
                
                for (int c = 8 - s.Length; c > 0; c--)
                {
                    b = "0" + b;
                }

            return b;
        }

        public string BinToHex(string bin)
        {
            string hexs = string.Empty;

            if (bin != string.Empty)
            {
                for (int o = 0; o < mantra.Length; o++)
                {
                    if (bin.Split(' ')[2].Substring(4,4) == mantra[o].Split('~')[0])
                    {
                        hexs += mantra[o].Split('~')[1];
                    }
                }

                for (int o = 0; o < mantra.Length; o++)
                {
                    if (bin.Split(' ')[2].Substring(0, 4) == mantra[o].Split('~')[0])
                    {
                        hexs = mantra[o].Split('~')[1] + hexs;
                    }
                }
            }

            return hexs;
        }

        private int StepIn(int osn, int stp)
        {
            int u = 1;

            while (stp > 0)
            {
                u = u * osn;
                stp--;
            }
            
            return u;
        }

        public ArrayList CompileToBRAM(string srcbram)
        {
            string bramOut = string.Empty;
            string [] hexPIL = srcbram.Split('_');
            ArrayList outPILBRAMData = new ArrayList();

            // int b = 0;

            if (srcbram.Length > 0)
            {
                for (int i = hexPIL.Length - 1; i >= 0; i = i - 32)
                {
                    if (i >= 32)
                    {
                        for (int g = i; g >= (i - 31); g--)
                        {
                            if (g == (i - 31))
                            {
                                bramOut = hexPIL[g].ToString() + bramOut;
                            }
                            else
                            {
                                bramOut = "_" + hexPIL[g].ToString() + bramOut;
                            }
                        }
                    }
                    else
                    {
                        for (int y = 0; y <= i; y++)
                        {
                            bramOut = bramOut + "_" + hexPIL[y].ToString();
                        }

                        for (int j = i; j < 31; j++)
                        {
                            bramOut = "_00" + bramOut;
                        }

                        bramOut = bramOut.Remove(0, 1);

                    }

                    if (BRAMhead_num_string <= 9)
                    {
                        bramOut = BRAMhead + "0" + BRAMhead_num_string.ToString() + BRAMheadTwo + bramOut;
                    }
                    else
                    {
                        bramOut = BRAMhead + BRAMhead_num_string.ToString() + BRAMheadTwo + bramOut;
                    }

                    bramOut = bramOut + "),";

                    outPILBRAMData.Add(bramOut);
                    
                    bramOut = string.Empty;
                    BRAMhead_num_string++;
                }
            }

            bRAMCount = outPILBRAMData.Count;
 
            return outPILBRAMData;
        }


        public string CompileBeforeToBRAM(string incomp, ArrayList arrCommands, bool zerofovd)
        {
            char[] delimiterChars = { '\r', '\n' };
            string[] binaryStr = null;
            ArrayList binArr = null;
            string rez = string.Empty;

            binaryStr = incomp.Split(delimiterChars);

            if (binaryStr.Length > 0)
            {
                binArr = new ArrayList();

                foreach (string s in binaryStr)
                {
                    if (s != string.Empty)
                    {
                        binArr.Add(s);
                    }
                }
            }

            foreach (string b in binArr)
            {
                foreach (string d in arrCommands)
                {
                    if (d.Split('~').Length == 2)
                    {
                        // Command MOV,ADD,SUB,SHR,SHL one byte. After push Compile Button!
                        if (b.Length > 3 && (b.Split(' ')[1] + " " + b.Split(' ')[2]) == d.Split('~')[1])
                        {
                            rez = "_" + BinToHex(d.Split('~')[0]) + rez;
                            nuMofStep++;
                        }

                        // Command JUMP. After push Compile Button!
                        if (b.Length > 3 && (b.Split(' ')[1] + " #ADDRA") == d.Split('~')[1])
                        {
                            if (b.Split('#')[1].Length == 1)
                            {
                                rez = "_" + b.Split('#')[1] + "0_" + BinToHex(d.Split('~')[0]) + "_00" + rez;
                            }
                            else
                            {
                                rez = "_" + b.Split('#')[1] + "_" + BinToHex(d.Split('~')[0]) + "_00" + rez;
                            }

                            nuMofStep++;
                        }

                        // MOV two bytes.
                        if (b.Length > 3 && (b.Contains("MOV") && b.Contains("#")) && 
                                        (b.Split(' ')[1] + " " + b.Split(' ')[2].Split(',')[0] 
                                                                        + ",#MEM" == d.Split('~')[1]))
                        {
                            rez = "_" + b.Split('#')[1] + "_" + BinToHex(d.Split('~')[0]) + rez;
                        }
                    }
                }
            }

            if (rez != string.Empty)
            {
                rez = rez.Remove(0, 1);
            }

            if (BRAMhead_num_string == 0 && zerofovd)
            {
                rez = rez + "_00";
            }

            return rez;
        }

        public int GetnuMofStep
        {
            get
            {
                return nuMofStep;
            }
        }

        public int GetBRAMcount
        {
            get
            {
                return bRAMCount;
            }
        }

        public int SetHeadZ
        {
            set
            {
                BRAMhead_num_string = value;
            }
        }

        public string LinkerOo(string tBox2)
        {
            string xxx = string.Empty;
            
            char[] delimiterChars = { '\r', '\n' };

            string[] asmTxtx = tBox2.Split(delimiterChars);

            foreach (string d in tBox2.Split(delimiterChars))
            {
                if (d.Length > 0 && d.Substring(0, 1) != "#" && d != string.Empty)
                {
                    nStr++;

                    if (Convert.ToString(nStr, 16).ToUpper().Length == 1)
                    {
                        xxx += "0" + Convert.ToString(nStr, 16).ToUpper() + " " + d + "\r\n";
                    }
                    else
                    {
                        xxx += Convert.ToString(nStr, 16).ToUpper() + " " + d + "\r\n";
                    }
                }
                else
                {
                    if (d.Length > 0)
                    {
                        xxx += d + "\r\n";
                    }
                }
            }

            return xxx;
        }

        public int GetAsmCount
        {
            get
            {
                return nStr;
            }
        }

        #endregion

    }
    
    partial class Form1
    {
        string pptt = Properties.Settings.Default.pptt;
        string pptttw = Properties.Settings.Default.pptttw;
        // ArrayList pocket = null;
        Generator gr = new Generator();
        FlReaderPIL fff = new FlReaderPIL();
        bool clickOrWrite = false;
        string fpgaBRAM = "_00";
        int numStrDB = 1;
        

        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel1 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabel2 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolStripStatusLabel3 = new System.Windows.Forms.ToolStripStatusLabel();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.listBox2 = new System.Windows.Forms.ListBox();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.statusStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(829, 42);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(142, 23);
            this.button1.TabIndex = 0;
            this.button1.Text = "Generator";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // listBox1
            // 
            this.listBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 18;
            this.listBox1.Location = new System.Drawing.Point(16, 12);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(296, 364);
            this.listBox1.TabIndex = 1;
            this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            this.listBox1.DoubleClick += new System.EventHandler(this.listBox1_DoubleClick);
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox1.Location = new System.Drawing.Point(332, 12);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(639, 24);
            this.textBox1.TabIndex = 2;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(829, 341);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(142, 23);
            this.button2.TabIndex = 3;
            this.button2.Text = "Compile";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.label1.Location = new System.Drawing.Point(329, 52);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(51, 20);
            this.label1.TabIndex = 4;
            this.label1.Text = "label1";
            // 
            // textBox2
            // 
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox2.Location = new System.Drawing.Point(332, 95);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(270, 281);
            this.textBox2.TabIndex = 6;
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel1,
            this.toolStripStatusLabel2,
            this.toolStripStatusLabel3});
            this.statusStrip1.Location = new System.Drawing.Point(0, 519);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(983, 22);
            this.statusStrip1.TabIndex = 7;
            this.statusStrip1.Text = "statusStrip1";
            // 
            // toolStripStatusLabel1
            // 
            this.toolStripStatusLabel1.Name = "toolStripStatusLabel1";
            this.toolStripStatusLabel1.Size = new System.Drawing.Size(118, 17);
            this.toolStripStatusLabel1.Text = "toolStripStatusLabel1";
            // 
            // toolStripStatusLabel2
            // 
            this.toolStripStatusLabel2.Name = "toolStripStatusLabel2";
            this.toolStripStatusLabel2.Size = new System.Drawing.Size(118, 17);
            this.toolStripStatusLabel2.Text = "toolStripStatusLabel2";
            // 
            // toolStripStatusLabel3
            // 
            this.toolStripStatusLabel3.Name = "toolStripStatusLabel3";
            this.toolStripStatusLabel3.Size = new System.Drawing.Size(118, 17);
            this.toolStripStatusLabel3.Text = "toolStripStatusLabel3";
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(829, 284);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(142, 23);
            this.button3.TabIndex = 8;
            this.button3.Text = "Clear";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(829, 313);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(142, 23);
            this.button4.TabIndex = 9;
            this.button4.Text = "Link";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // listBox2
            // 
            this.listBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.listBox2.FormattingEnabled = true;
            this.listBox2.ItemHeight = 18;
            this.listBox2.Location = new System.Drawing.Point(16, 382);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(955, 112);
            this.listBox2.TabIndex = 10;
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(829, 231);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(99, 17);
            this.checkBox1.TabIndex = 11;
            this.checkBox1.Text = "NOP ведущий.";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(983, 541);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.listBox2);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "MY NEW PIL";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.ListBox listBox2;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel3;
        private System.Windows.Forms.CheckBox checkBox1;
    }
}

