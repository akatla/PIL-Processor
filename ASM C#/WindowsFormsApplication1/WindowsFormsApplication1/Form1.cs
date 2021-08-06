using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Collections;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //int zz = 0;

            //foreach(string s in gr.GeneratorBinaryPIL())
            //{
            //    if (zz.ToString().Length == 1)
            //    {
            //        listBox1.Items.Add("  " + zz.ToString() + " -> " + s);
            //    }
                
            //    if (zz.ToString().Length == 2)
            //    {
            //        listBox1.Items.Add(" " + zz.ToString() + " -> " + s);
            //    }

            //    if (zz.ToString().Length == 3)
            //    {
            //        listBox1.Items.Add(zz.ToString() + " -> " + s);
            //    }

            //    zz++;
            //}
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string[] ddt = null;

            if (listBox1.Items[listBox1.SelectedIndex].ToString().Split('~').Length == 2)
            {
                ddt = listBox1.Items[listBox1.SelectedIndex].ToString().Split('~');

                textBox1.Text = ddt[0];
                label1.Text = ddt[1] + " HEX " + gr.BinToHex(ddt[0]);
            }
            else
            {
                ddt = listBox1.Items[listBox1.SelectedIndex].ToString().Split('~');
                textBox1.Text = ddt[0];
                label1.Text = string.Empty;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            int x = 0;
            int comm = 0;

            toolStripStatusLabel2.Text = string.Empty;

            button2.Enabled = false;

            fff.ReadCommandFile(pptt);

            foreach (string s in fff.GetCommandList())
            {
                listBox1.Items.Add(s);
                x++;

                if (s.Split('~') != null && s.Split('~').Length > 1)
                {
                    comm++;
                }
            }

            label1.Text = string.Empty;

            if (fff.CheckFileIsExist(pptt))
            {
                if (listBox1.Items.Count > 0)
                {
                    listBox1.SelectedIndex = 0;

                    if (listBox1.Items.Count > 0)
                    {
                         toolStripStatusLabel1.Text = x.ToString() + " записей. " + comm.ToString() + " команд. Свободных " + (x - comm).ToString() + " позиций.";
                    }
                }
                else
                {
                    toolStripStatusLabel1.Text = "0 записей в файле команд!";
                }
            }
            else
            {
                toolStripStatusLabel1.Text = "Файл списка команд отстствует!";
            }

            button1.Enabled = Properties.Settings.Default.GenButton;
            toolStripStatusLabel3.Text = string.Empty;

            this.Text = "Assembler PIL " + DateTime.Now.Year;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ar = new ArrayList();
            
            gr.SetHeadZ = 0;

            listBox2.Items.Clear();

            if (textBox2.Text == string.Empty)
            {
                toolStripStatusLabel2.Text = " Исходный код не найден!";
            }
            else
            {
                if (clickOrWrite)
                {
                    listBox2.Items.Add(gr.CompileToBRAM(fpgaBRAM));
                    
                    // fff.WriteCommandFile(pptttw, label2.Text);
                }
                else
                {
                    foreach (string s in gr.CompileToBRAM(gr.CompileBeforeToBRAM(textBox2.Text, new ArrayList(listBox1.Items),checkBox1.Checked)))
                    {
                        listBox2.Items.Add(s + " " + (s.Split('_').Length - 1).ToString());
                        ar.Add(s);
                    }

                    // toolStripStatusLabel2.Text = "Команд " + listBox2.Items.Count.ToString();
                    toolStripStatusLabel3.Text = gr.GetBRAMcount.ToString() + "строк(а)(и) для загрузки в BRAM готово!";
                }
                
                fff.WriteCommandFile(pptttw,ar);
                // toolStripStatusLabel2.Text = "Позиций "+ label2.Text.Split('_').Length.ToString();
            }

            BRAMbtn.Enabled = true;
            upLoadToBRAMToolStripMenuItem.Enabled = true;
        }

        private void listBox1_DoubleClick(object sender, EventArgs e)
        {
            string[] commandCompile = null;            

            if (listBox1.Items.Count > 0)
            {
                commandCompile = listBox1.Items[listBox1.SelectedIndex].ToString().Split('~');

                textBox2.Text += Convert.ToString(numStrDB, 16).ToUpper() + " " + commandCompile[1].Trim() + "\r\n";

                fpgaBRAM = "_" + gr.BinToHex(commandCompile[0].Trim()) + fpgaBRAM;

                clickOrWrite = true;

                numStrDB++;
            }
            else
            {
                textBox2.Text = string.Empty;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox2.Text != string.Empty)
            {
                listBox2.Items.Clear();
                fpgaBRAM = string.Empty;
                textBox2.Text = string.Empty;
                toolStripStatusLabel2.Text = string.Empty;
                clickOrWrite = false;
                button2.Enabled = false;
                checkBox1.Checked = false;
                gr.nStrZero = 0;
                gr.SetHeadZ = 0;
                gr.SetLblCount = 0;
                toolStripStatusLabel3.Text = string.Empty;
                linkToolStripMenuItem.Enabled = false;
                compileToolStripMenuItem.Enabled = false;
                upLoadToBRAMToolStripMenuItem.Enabled = false;
                BRAMbtn.Enabled = false;
            }
            else
            {
                toolStripStatusLabel3.Text = "Нет данных.";
            }

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (textBox2.Text != string.Empty)
            {
                gr.SetLblCount = 0;
                textBox2.Text = gr.LinkerLabel(gr.LinkerOo(textBox2.Text), checkBox1.Checked);
                toolStripStatusLabel3.Text = "ASM " + gr.GetAsmCount.ToString() + " strings linked!";

                button2.Enabled = true;
                compileToolStripMenuItem.Enabled = true;
            }
            else
            {
                toolStripStatusLabel3.Text = "Нет данных.";
            }
        }

        private void BRAMbtn_Click(object sender, EventArgs e)
        {
           fff.UpLoadToBiram(Properties.Settings.Default.PathBRAM + Properties.Settings.Default.BRAMname, ar);
           BRAMbtn.Enabled = false;
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            button3_Click(sender, e);
        }

        private void linkToolStripMenuItem_Click(object sender, EventArgs e)
        {
            button4_Click(sender, e);
        }

        private void compileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            button2_Click(sender, e);
        }

        private void upLoadToBRAMToolStripMenuItem_Click(object sender, EventArgs e)
        {
            BRAMbtn_Click(sender, e);
            upLoadToBRAMToolStripMenuItem.Enabled = false;
        }

        private void closeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void aboutToolStripMenuItem2_Click(object sender, EventArgs e)
        {
            Form2 fAbout = new Form2();

            fAbout.ShowDialog();
        }
    }
}
