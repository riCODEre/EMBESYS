using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StepMotor_DelosReyes
{
    public partial class Main : Form
    {
        long steps = 0;
        decimal stepsSec = 0;
        decimal timeMS;
        bool checkValid;
        public Main()
        {
            InitializeComponent();
            
        }

        private void runRotate_Click(object sender, EventArgs e)
        {
            if (degrees.Text == "")
            {
                degreeWarn.Visible = true;
            }
            else { checkValid = true; };
            try
            {
                long.Parse(degrees.Text);
                checkValid = true;
            }
            catch 
            {
                degreeWarn.Visible = true;
                checkValid = false;
            }

            if (ClockW.Checked == false && CounterW.Checked == false)
            {
                rotationWarn.Visible = true;
                checkValid = false;
            }

            if (checkValid == true)
            {
                Progress.Value = 0;
                timer1.Start();
                ProgCount.Visible = true;
                steps = (2048 / 360) * long.Parse(degrees.Text);
                stepsSec = Math.Round((rpm.Value * 2048) / 60);
                timeMS = Math.Floor(((steps / stepsSec) * 1000) / 100) * 100;
                Progress.Maximum = (int)timeMS;
                Console.WriteLine("Steps: " + steps);
                Console.WriteLine("stepSec: " + stepsSec);
                Console.WriteLine("timeMS: " + timeMS);

                if (ClockW.Checked == true)
                {
                    serialPort1.Write("c;" + degrees.Text + ";" + rpm.Text + ";");
                }
                else if (CounterW.Checked == true)
                {
                    serialPort1.Write("w;" + degrees.Text + ";" + rpm.Text + ";");
                }
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            serialPort1.Open();
            
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            serialPort1.Close();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (Progress.Value < Progress.Maximum)
            {
                Progress.Value += timer1.Interval;
                ProgCount.Text = Progress.Value.ToString();
            }
            else
            {
                ProgCount.Visible = false;
                
                timer1.Stop();
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void degrees_Click(object sender, EventArgs e)
        {
            degreeWarn.Visible = false;
        }

        private void CounterW_CheckedChanged(object sender, EventArgs e)
        {
            rotationWarn.Visible = false;
        }

        private void ClockW_CheckedChanged(object sender, EventArgs e)
        {
            rotationWarn.Visible = false;
        }
    }
}
