﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.FormClosed += Form1_FormClosed;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            label1.Text = "Hello, world";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            MessageBox.Show("Форма закрыта");
        }
    }
}
