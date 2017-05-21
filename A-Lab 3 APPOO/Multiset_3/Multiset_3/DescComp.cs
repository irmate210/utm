using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Multiset_3
{
    class DescComp : IComparer<Masini>
    {
        public int Compare(Masini x, Masini y)
        {
            return y.GetPrice().CompareTo(x.GetPrice());
        }
    }
}
