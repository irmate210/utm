using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Multiset_3
{
    class CustomMultiset
    {
        private List<Masini> multiset;

        public CustomMultiset()
        {
            this.multiset = new List<Masini>();
        }

        public List<Masini> GetMultiset()
        {
            return multiset;
        }

        public void AddElement(Masini obj)
        {
            this.multiset.Add(obj);
        }

        public List<Masini> FindByBrand(String brand)
        {
            List<Masini> temp = new List<Masini>();
            foreach (var obj in multiset)
            {
                if (obj.GetBrand().Equals(brand))
                {
                    temp.Add(obj);
                }
            }
            return temp;
        }

        public CustomQueue OutputToDeque(String brand)
        {
            List<Masini> temp = FindByBrand(brand);
            CustomQueue result = new CustomQueue();
            if (temp.Count() != 0)
            {
                foreach (var obj in temp)
                {
                    result.AddElement(obj);
                    this.multiset.Remove(obj);
                }
            }
            else
            {
                Console.WriteLine("Nothing Found!");
            }
            return result;
        }

        public void SortDescending()
        {
            multiset.Sort(new DescComp());
        }

        public void SortAscending()
        {
            multiset.Sort(new AscComp());
        }

        public int CountByPrice(int price)
        {
            int count = 0;
            foreach (var obj in multiset)
            {
                if (obj.GetPrice() > price)
                {
                    count += 1;
                }
            }
            return count;
        }

        public void Print()
        {
            Console.WriteLine("\n[Print Multiset]\n");
            foreach (var obj in multiset)
            {
                Console.WriteLine(obj);
            }
        }

        public void OutputByBrand(String brand)
        {
            if (multiset.Count() != 0)
            {
                Console.WriteLine("Found:");
                foreach (var obj in multiset)
                {
                    if (obj.GetBrand().Equals(brand))
                    {
                        Console.WriteLine(obj);
                    }
                }
            }
            else
            {
                Console.WriteLine("Nothing Found:!");
            }
        }
    }
}
