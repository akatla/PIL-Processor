using System.Collections;
using System.IO;
using System;

namespace WindowsFormsApplication1
{
    #region FileWorker
    /// <summary>
    /// Class Files.
    /// </summary>
    public class FlReaderPIL
    {
        ArrayList dataCommands = new ArrayList();
        ArrayList arrBRAM = new ArrayList();
        
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

        private void BRAMReader(string pathBR)
        {
            try
            {
                fdsr = new StreamReader(pathBR);

                while ((cs = fdsr.ReadLine()) != null)
                {
                    arrBRAM.Add(cs);
                }
            }
            catch (Exception fex)
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

        private void BRAMChange(ArrayList bram, string pathBR)
        {
            try
            {
                fdsw = new StreamWriter(pathBR);

                foreach (string s in bram)
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

        /// <summary>
        /// Done! 06/08/2021 03:24
        /// </summary>
        /// <param name="arrIn"></param>
        /// <param name="bramSw"></param>
        /// <returns></returns>
        private ArrayList BRAMSwitchRecords(ArrayList arrIn, ArrayList bramSw)
        {
            ArrayList rez = new ArrayList();
            bool zed = false;

            foreach (string brs in arrIn)
            {
                foreach (string bb in bramSw)
                {
                    if (brs.Contains(".INIT_") && bb.Substring(bb.IndexOf(".INIT_"), 8) == brs.Substring(brs.IndexOf(".INIT_"), 8))
                    {
                        rez.Add(bb);
                        zed = true;
                        break;
                    }
                }

                if (zed)
                {
                    zed = false;
                    continue;
                }
                else
                {
                    rez.Add(brs);
                }
                  
            }

            return rez;
        }

        public void UpLoadToBiram(string pt, ArrayList stobram)
        {
            BRAMReader(pt);
            BRAMChange(BRAMSwitchRecords(arrBRAM, stobram), pt);
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
    #endregion

    #region MainGenerator
    public class Generator
    {
        private ArrayList arr = null;
        string BRAMhead = ".INIT_";
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
        int adrrLblCounter = 0;

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

        /// <summary>
        /// Main Function of Compilator to BRAM Xilinx.
        /// </summary>
        /// <param name="incomp"></param>
        /// <param name="arrCommands"></param>
        /// <param name="zerofovd"></param>
        /// <returns></returns>
        public string CompileBeforeToBRAM(string incomp, ArrayList arrCommands, bool zerofovd)
        {            
            string[] separatingStrings = { "\r\n" };
            string[] binaryStr = null;
            ArrayList binArr = null;
            string rez = string.Empty;
            string tH = string.Empty;

            binaryStr = incomp.Split(separatingStrings, System.StringSplitOptions.RemoveEmptyEntries);

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
                if (b[0] != ':')
                {
                    foreach (string d in arrCommands)
                    {
                        tH = d;

                        if (d.Contains("LD") || d.Contains("ST"))
                        {
                            tH = d.Replace("[RA](", string.Empty);
                            tH = tH.Replace(")", string.Empty); ;
                        }

                        if (tH.Split('~').Length == 2)
                        {
                            // Command MOV,ADD,SUB,SHR,SHL one byte. After push Compile Button!
                            if ((b.Split(' ')[1] + " " + b.Split(' ')[2]) == tH.Split('~')[1]) // b.Length > 3 && 
                            {
                                rez = "_" + BinToHex(d.Split('~')[0]) + rez;
                                nuMofStep++;
                            }

                            // Command JUMP. After push Compile Button! Renew !!!
                            if ((b.Split(' ')[1] + " #ADDRA") == tH.Split('~')[1]) // b.Length > 3 && 
                            {
                                if (zerofovd)
                                {
                                    rez = "_" + b.Split(':')[1] + "_" + BinToHex(tH.Split('~')[0]) + "_00" + rez;
                                }
                                else
                                {
                                    rez = "_" + b.Split(':')[1] + "_" + BinToHex(tH.Split('~')[0]) + rez;
                                }

                                nuMofStep++;
                            }

                            // MOV two bytes.
                            if ((b.Contains("MOV") && b.Contains("#")) &&
                                            (b.Split(' ')[1] + " " + b.Split(' ')[2].Split(',')[0]
                                                                            + ",#MEM" == tH.Split('~')[1])) // b.Length > 3 && 
                            {
                                rez = "_" + b.Split('#')[1] + "_" + BinToHex(tH.Split('~')[0]) + rez;
                            }
                        }
                    }
                }
            }

            if (rez != string.Empty)
            {
                rez = rez.Remove(0, 1);
            }

            return rez;
        }

        public string LinkerOo(string tBox2)
        {
            string xxx = string.Empty;
            
            char[] delimiterChars = { '\r', '\n' };

            foreach (string d in tBox2.Split(delimiterChars))
            {
                if (d != string.Empty && d.Substring(0, 1) != ":")
                {
                    if (Convert.ToString(nStr, 16).ToUpper().Length == 1)
                    {
                        xxx += "0" + Convert.ToString(nStr, 16).ToUpper() + " " + d + "\r\n";
                    }
                    else
                    {
                        xxx += Convert.ToString(nStr, 16).ToUpper() + " " + d + "\r\n";
                    }

                    // After all!
                    nStr++;
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

        /// <summary>
        /// Set label to their addresses.
        /// </summary>
        /// <param name="lbl"></param>
        /// <param name="chZr"></param>
        /// <returns></returns>
        public string LinkerLabel(string lbl, bool chZr)
        {
            string lblout = string.Empty;

            ArrayList lblArr = new ArrayList();

            ArrayList noEmptArr = new ArrayList();

            char[] delimiterChars = { '\r', '\n' };

            foreach (string t in lbl.Split(delimiterChars))
            {
                if (t != string.Empty)
                {
                    noEmptArr.Add(t);
                }
            }

            foreach (string ff in noEmptArr)
            {
                // MOV RX,#XX
                if (ff.Contains(",#"))
                {
                    adrrLblCounter += 2;
                }

                // JM? :XX
                if (ff.Contains(" :"))
                {
                    if (chZr)
                    {
                        adrrLblCounter += 3;
                    }
                    else
                    {
                        adrrLblCounter += 2;
                    }
                }

                // MOV RX,RY
                if ((!ff.Contains(",#") && ff.Contains("MOV")) || 
                        ff.Contains("INC") || ff.Contains("SH") || 
                            ff.Contains("LD") || ff.Contains("ST") ||
                                ff.Contains("ADD") || ff.Contains("SUB"))
                {
                    adrrLblCounter++;
                }

                if (ff[0] == ':')
                {
                    if (Convert.ToString(adrrLblCounter, 16).Length <= 1)
                    {
                        lblArr.Add(ff + "~" + "0" + Convert.ToString(adrrLblCounter, 16).ToUpper());
                    }
                    else
                    {
                        lblArr.Add(ff + "~" + Convert.ToString(adrrLblCounter, 16).ToUpper());
                    }
                }          
            }           

            foreach (string bibi in noEmptArr)
            {
                if (bibi[0] == ':')
                {
                    lblout += bibi + "\r\n";
                }

                if (bibi.Contains(",") || bibi.Contains("INC") || bibi.Contains("SH"))
                {
                    lblout += bibi + "\r\n";
                }

                if (bibi.Contains(" :"))
                {
                    foreach (string s in lblArr)
                    {
                        if (bibi.Split(' ')[2] == s.Split('~')[0])
                        {
                            lblout += bibi.Replace(bibi.Split(' ')[2], ":" + s.Split('~')[1]) + "\r\n";
                        }
                    }
                }
            }

            return lblout;
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

        public int SetLblCount
        {
            set
            {
                adrrLblCounter = value;
            }
        }

        public int GetAsmCount
        {
            get
            {
                return nStr;
            }
        }

        public int nStrZero
        {
            set 
            {
                nStr = value;
            }
        }

        #endregion

    }
    #endregion

    #region FormStuff
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
        ArrayList ar = null;
        

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
            this.BRAMbtn = new System.Windows.Forms.Button();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.linkToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.compileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.upLoadToBRAMToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.closeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.aboutToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem2 = new System.Windows.Forms.ToolStripMenuItem();
            this.statusStrip1.SuspendLayout();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(829, 80);
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
            this.listBox1.Location = new System.Drawing.Point(16, 50);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(296, 364);
            this.listBox1.TabIndex = 1;
            this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            this.listBox1.DoubleClick += new System.EventHandler(this.listBox1_DoubleClick);
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox1.Location = new System.Drawing.Point(332, 50);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(639, 24);
            this.textBox1.TabIndex = 2;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(829, 379);
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
            this.label1.Location = new System.Drawing.Point(329, 90);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(51, 20);
            this.label1.TabIndex = 4;
            this.label1.Text = "label1";
            // 
            // textBox2
            // 
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.textBox2.Location = new System.Drawing.Point(332, 146);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(270, 268);
            this.textBox2.TabIndex = 6;
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel1,
            this.toolStripStatusLabel2,
            this.toolStripStatusLabel3});
            this.statusStrip1.Location = new System.Drawing.Point(0, 537);
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
            this.button3.Location = new System.Drawing.Point(829, 322);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(142, 23);
            this.button3.TabIndex = 8;
            this.button3.Text = "Clear";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(829, 351);
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
            this.listBox2.Location = new System.Drawing.Point(16, 420);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(955, 112);
            this.listBox2.TabIndex = 10;
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(829, 269);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(99, 17);
            this.checkBox1.TabIndex = 11;
            this.checkBox1.Text = "NOP ведущий.";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // BRAMbtn
            // 
            this.BRAMbtn.Enabled = false;
            this.BRAMbtn.Location = new System.Drawing.Point(829, 229);
            this.BRAMbtn.Name = "BRAMbtn";
            this.BRAMbtn.Size = new System.Drawing.Size(142, 23);
            this.BRAMbtn.TabIndex = 12;
            this.BRAMbtn.Text = "UpLoad BRAM";
            this.BRAMbtn.UseVisualStyleBackColor = true;
            this.BRAMbtn.Click += new System.EventHandler(this.BRAMbtn_Click);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem,
            this.aboutToolStripMenuItem1});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(983, 24);
            this.menuStrip1.TabIndex = 13;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.aboutToolStripMenuItem,
            this.linkToolStripMenuItem,
            this.compileToolStripMenuItem,
            this.upLoadToBRAMToolStripMenuItem,
            this.closeToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // aboutToolStripMenuItem
            // 
            this.aboutToolStripMenuItem.Name = "aboutToolStripMenuItem";
            this.aboutToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.aboutToolStripMenuItem.Text = "Clear";
            this.aboutToolStripMenuItem.Click += new System.EventHandler(this.aboutToolStripMenuItem_Click);
            // 
            // linkToolStripMenuItem
            // 
            this.linkToolStripMenuItem.Name = "linkToolStripMenuItem";
            this.linkToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.linkToolStripMenuItem.Text = "Link";
            this.linkToolStripMenuItem.Click += new System.EventHandler(this.linkToolStripMenuItem_Click);
            // 
            // compileToolStripMenuItem
            // 
            this.compileToolStripMenuItem.Enabled = false;
            this.compileToolStripMenuItem.Name = "compileToolStripMenuItem";
            this.compileToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.compileToolStripMenuItem.Text = "Compile";
            this.compileToolStripMenuItem.Click += new System.EventHandler(this.compileToolStripMenuItem_Click);
            // 
            // upLoadToBRAMToolStripMenuItem
            // 
            this.upLoadToBRAMToolStripMenuItem.Enabled = false;
            this.upLoadToBRAMToolStripMenuItem.Name = "upLoadToBRAMToolStripMenuItem";
            this.upLoadToBRAMToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.upLoadToBRAMToolStripMenuItem.Text = "Up load to BRAM";
            this.upLoadToBRAMToolStripMenuItem.Click += new System.EventHandler(this.upLoadToBRAMToolStripMenuItem_Click);
            // 
            // closeToolStripMenuItem
            // 
            this.closeToolStripMenuItem.Name = "closeToolStripMenuItem";
            this.closeToolStripMenuItem.Size = new System.Drawing.Size(165, 22);
            this.closeToolStripMenuItem.Text = "Close";
            this.closeToolStripMenuItem.Click += new System.EventHandler(this.closeToolStripMenuItem_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(332, 127);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(78, 13);
            this.label2.TabIndex = 14;
            this.label2.Text = "Asm editor PIL:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(16, 31);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(69, 13);
            this.label3.TabIndex = 15;
            this.label3.Text = "Command list";
            // 
            // aboutToolStripMenuItem1
            // 
            this.aboutToolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.aboutToolStripMenuItem2});
            this.aboutToolStripMenuItem1.Name = "aboutToolStripMenuItem1";
            this.aboutToolStripMenuItem1.Size = new System.Drawing.Size(44, 20);
            this.aboutToolStripMenuItem1.Text = "Help";
            // 
            // aboutToolStripMenuItem2
            // 
            this.aboutToolStripMenuItem2.Name = "aboutToolStripMenuItem2";
            this.aboutToolStripMenuItem2.Size = new System.Drawing.Size(152, 22);
            this.aboutToolStripMenuItem2.Text = "About";
            this.aboutToolStripMenuItem2.Click += new System.EventHandler(this.aboutToolStripMenuItem2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(983, 559);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.BRAMbtn);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.listBox2);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.button1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MainMenuStrip = this.menuStrip1;
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Assembler PIL";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
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
        private System.Windows.Forms.Button BRAMbtn;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem linkToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem compileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem upLoadToBRAMToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem closeToolStripMenuItem;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem2;
    }
}
    #endregion