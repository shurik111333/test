using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        private static void F(ref List<int> list)
        {
            list.Add(0);
            list.Add(1);
        }

        static void Main(string[] args)
        {
            List<int> list = new List<int>();
            F(ref list);
            Console.WriteLine(list.Count);
        }
    }
}
