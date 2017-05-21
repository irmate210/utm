using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Multiset_3
{
    class Program
    {
        static void Main(string[] args)
        {
            CustomMultiset list = new CustomMultiset();
            CustomMultiset result;
            CustomQueue q;

            string brand;
            int price;

            Masini m1 = new Masini("Mercedes", "W222", 120000);
            Masini m2 = new Masini("Lexus", "l460", 80000);
            Masini m3 = new Masini("Mazda", "CX5", 45000);
            Masini m4 = new Masini("BMW", "i3", 40000);
            Masini m5 = new Masini("BMW", "i8", 60000);
            Masini m6 = new Masini("Pontiac", "Solstice", 25000);
            Masini m7 = new Masini("Lada", "2120", 10000);
            Masini m8 = new Masini("Mercedes", "S550", 80000);
            
            list.AddElement(m1);
            list.AddElement(m2);
            list.AddElement(m3);
            list.AddElement(m4);
            list.AddElement(m5);
            list.AddElement(m6);
            list.AddElement(m7);
            list.AddElement(m8);

            Console.WriteLine("1,2,3 Set|Sort|Print: \n");
            list.SortDescending();
            list.Print();
            Console.WriteLine("4,5,6 Search|Copy|Print: ");
            brand = Console.ReadLine();
            q = list.OutputToDeque(brand);
            q.Print();
            Console.WriteLine("7,8 Sort|Print: ");
            list.SortAscending();
            q.SortAsceding();
            list.Print();
            q.Print();
            Console.WriteLine("9,10 MergeContainers|Print: ");
            result = q.Merge(list);
            result.Print();
            Console.WriteLine("11 Count:");
            Console.WriteLine("\nInput price: ");
            price = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Found: " + result.CountByPrice(price));
            Console.WriteLine("12 Find:");
            brand = Console.ReadLine();
            result.OutputByBrand(brand);
            Console.ReadKey();
        }
    }
}
