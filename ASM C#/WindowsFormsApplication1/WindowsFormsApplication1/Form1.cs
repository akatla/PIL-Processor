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
            int zz = 0;

            foreach(string s in gr.GeneratorBinaryPIL())
            {
                if (zz.ToString().Length == 1)
                {
                    listBox1.Items.Add("  " + zz.ToString() + " -> " + s);
                }
                
                if (zz.ToString().Length == 2)
                {
                    listBox1.Items.Add(" " + zz.ToString() + " -> " + s);
                }

                if (zz.ToString().Length == 3)
                {
                    listBox1.Items.Add(zz.ToString() + " -> " + s);
                }

                zz++;
            }
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

            toolStripStatusLabel2.Text = "0 позиций.";

            // label2.Text = fpgaBRAM;

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
        }

        private void button2_Click(object sender, EventArgs e)
        {
            ArrayList ar = new ArrayList();
            
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
                    foreach (string s in gr.CompileToBRAM(gr.CompileBeforeToBRAM(textBox2.Text, new ArrayList(listBox1.Items))))
                    {
                        listBox2.Items.Add(s + " " + s.Split('_').Length.ToString());
                        ar.Add(s);
                    }

                    toolStripStatusLabel2.Text = "Команд " + listBox2.Items.Count.ToString();
                }
                
                fff.WriteCommandFile(pptttw,ar);
                // toolStripStatusLabel2.Text = "Позиций "+ label2.Text.Split('_').Length.ToString();
            }
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
            listBox2.Items.Clear();
            fpgaBRAM = string.Empty;
            textBox2.Text = string.Empty;
            toolStripStatusLabel2.Text = string.Empty;
            clickOrWrite = false;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox2.Text = gr.LinkerOo(textBox2.Text);
        }
    }
}
