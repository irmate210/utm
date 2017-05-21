using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Multiset_3
{
    class CustomQueue
    {
        private Queue<Masini> q;

        public CustomQueue()
        {
            this.q = new Queue<Masini>();
        }

        public void AddElement(Masini obj)
        {
            this.q.Enqueue(obj);
        }

        public Queue<Masini> GetQueue()
        {
            return q;
        }

        public void Print()
        {
            Console.WriteLine("\n[Print Queue]\n");
            foreach (var obj in q)
            {
                Console.WriteLine(obj);
            }
        }

        public void SortAsceding()
        {
            CustomMultiset temp = new CustomMultiset();
            foreach (var obj in q)
            {
                temp.AddElement(obj);
            }
            temp.SortAscending();
            q.Clear();
            foreach (var obj in temp.GetMultiset())
            {
                q.Enqueue(obj);
            }
        }

        public CustomMultiset Merge(CustomMultiset lst)
        {
            CustomMultiset result = new CustomMultiset();
            foreach (var obj in lst.GetMultiset())
            {
                result.AddElement(obj);
            }
            foreach (var obj in q)
            {
                result.AddElement(obj);
            }
            return result;
        }
    }
}
