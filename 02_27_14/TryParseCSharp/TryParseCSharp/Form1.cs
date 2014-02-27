using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TryParseCSharp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string strInput = "abc";
            double dblMiles = 0;

            dblMiles = Convert.ToDouble(strInput);

            
            if (!Double.TryParse(strInput, out dblMiles))
            {
                MessageBox.Show("Please enter valid input");
            }




        }
    }
}
