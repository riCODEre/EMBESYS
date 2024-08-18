namespace StepMotor_DelosReyes
{
    partial class Main
    {
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
            this.components = new System.ComponentModel.Container();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.degrees = new System.Windows.Forms.TextBox();
            this.runRotate = new System.Windows.Forms.Button();
            this.ClockW = new System.Windows.Forms.RadioButton();
            this.CounterW = new System.Windows.Forms.RadioButton();
            this.rpm = new System.Windows.Forms.NumericUpDown();
            this.Progress = new System.Windows.Forms.ProgressBar();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.ProgCount = new System.Windows.Forms.Label();
            this.degreeWarn = new System.Windows.Forms.Label();
            this.rotationWarn = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.rpm)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(39, 48);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(60, 16);
            this.label1.TabIndex = 0;
            this.label1.Text = "Degrees";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(40, 80);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(48, 16);
            this.label2.TabIndex = 1;
            this.label2.Text = "Speed";
            // 
            // degrees
            // 
            this.degrees.Location = new System.Drawing.Point(101, 45);
            this.degrees.Name = "degrees";
            this.degrees.Size = new System.Drawing.Size(120, 22);
            this.degrees.TabIndex = 2;
            this.degrees.Click += new System.EventHandler(this.degrees_Click);
            // 
            // runRotate
            // 
            this.runRotate.Location = new System.Drawing.Point(113, 180);
            this.runRotate.Name = "runRotate";
            this.runRotate.Size = new System.Drawing.Size(107, 34);
            this.runRotate.TabIndex = 4;
            this.runRotate.Text = "Run";
            this.runRotate.UseVisualStyleBackColor = true;
            this.runRotate.Click += new System.EventHandler(this.runRotate_Click);
            // 
            // ClockW
            // 
            this.ClockW.AutoSize = true;
            this.ClockW.Location = new System.Drawing.Point(42, 131);
            this.ClockW.Name = "ClockW";
            this.ClockW.Size = new System.Drawing.Size(119, 20);
            this.ClockW.TabIndex = 5;
            this.ClockW.TabStop = true;
            this.ClockW.Text = "Turn Clockwise";
            this.ClockW.UseVisualStyleBackColor = true;
            this.ClockW.CheckedChanged += new System.EventHandler(this.ClockW_CheckedChanged);
            // 
            // CounterW
            // 
            this.CounterW.AutoSize = true;
            this.CounterW.Location = new System.Drawing.Point(42, 154);
            this.CounterW.Name = "CounterW";
            this.CounterW.Size = new System.Drawing.Size(168, 20);
            this.CounterW.TabIndex = 6;
            this.CounterW.TabStop = true;
            this.CounterW.Text = "Turn Counter Clockwise";
            this.CounterW.UseVisualStyleBackColor = true;
            this.CounterW.CheckedChanged += new System.EventHandler(this.CounterW_CheckedChanged);
            // 
            // rpm
            // 
            this.rpm.Location = new System.Drawing.Point(100, 78);
            this.rpm.Maximum = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.rpm.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.rpm.Name = "rpm";
            this.rpm.Size = new System.Drawing.Size(120, 22);
            this.rpm.TabIndex = 7;
            this.rpm.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // Progress
            // 
            this.Progress.Location = new System.Drawing.Point(42, 246);
            this.Progress.Name = "Progress";
            this.Progress.Size = new System.Drawing.Size(176, 23);
            this.Progress.TabIndex = 8;
            // 
            // serialPort1
            // 
            this.serialPort1.PortName = "COM5";
            // 
            // timer1
            // 
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // ProgCount
            // 
            this.ProgCount.AutoSize = true;
            this.ProgCount.Location = new System.Drawing.Point(110, 227);
            this.ProgCount.Name = "ProgCount";
            this.ProgCount.Size = new System.Drawing.Size(14, 16);
            this.ProgCount.TabIndex = 9;
            this.ProgCount.Text = "0";
            this.ProgCount.Visible = false;
            this.ProgCount.Click += new System.EventHandler(this.label3_Click);
            // 
            // degreeWarn
            // 
            this.degreeWarn.AutoSize = true;
            this.degreeWarn.ForeColor = System.Drawing.Color.Red;
            this.degreeWarn.Location = new System.Drawing.Point(98, 26);
            this.degreeWarn.Name = "degreeWarn";
            this.degreeWarn.Size = new System.Drawing.Size(174, 16);
            this.degreeWarn.TabIndex = 10;
            this.degreeWarn.Text = "Only valid numbers allowed.";
            this.degreeWarn.Visible = false;
            // 
            // rotationWarn
            // 
            this.rotationWarn.AutoSize = true;
            this.rotationWarn.ForeColor = System.Drawing.Color.Red;
            this.rotationWarn.Location = new System.Drawing.Point(40, 111);
            this.rotationWarn.Name = "rotationWarn";
            this.rotationWarn.Size = new System.Drawing.Size(149, 16);
            this.rotationWarn.TabIndex = 11;
            this.rotationWarn.Text = "Select rotation direction.";
            this.rotationWarn.Visible = false;
            // 
            // Main
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(404, 438);
            this.Controls.Add(this.rotationWarn);
            this.Controls.Add(this.degreeWarn);
            this.Controls.Add(this.ProgCount);
            this.Controls.Add(this.Progress);
            this.Controls.Add(this.rpm);
            this.Controls.Add(this.CounterW);
            this.Controls.Add(this.ClockW);
            this.Controls.Add(this.runRotate);
            this.Controls.Add(this.degrees);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Main";
            this.Text = "Stepper_DelosReyes";
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.Form1_FormClosed);
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.rpm)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox degrees;
        private System.Windows.Forms.Button runRotate;
        private System.Windows.Forms.RadioButton ClockW;
        private System.Windows.Forms.RadioButton CounterW;
        private System.Windows.Forms.NumericUpDown rpm;
        private System.Windows.Forms.ProgressBar Progress;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label ProgCount;
        private System.Windows.Forms.Label degreeWarn;
        private System.Windows.Forms.Label rotationWarn;
    }
}

