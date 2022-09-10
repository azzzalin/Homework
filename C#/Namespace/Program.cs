using System;
namespace HW1
{
    public class Program
    {
        static void Main(string[] args)
        {
            Azerbaijan.Baku baku = new(2000000);
            USA.Washington washington= new(701974);
            UK.London london = new(9000000);

            Console.WriteLine("The population of Baku is {0} inhabitants.\n", baku.Population);
            Console.WriteLine("The population of Washington is {0} inhabitants.\n", washington.Population);
            Console.WriteLine("The population of London is {0} inhabitants.\n", london.Population);

            Console.ReadKey();
        }
    }
}
