using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test_doublefloatParse
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string input = Console.ReadLine();
                try
                {
                    double res = double.Parse(input);
                    Console.WriteLine("double: " + res.ToString());
                }
                catch
                {
                    try
                    {
                        float res = float.Parse(input);
                        Console.WriteLine("float:" + res.ToString());
                    }
                    catch
                    {
                        double res = double.Parse(input.Replace('.', ','));
                        Console.WriteLine("replace double: " + res.ToString());
                    }
                }
            }
        }
    }
}
