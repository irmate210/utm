using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Multiset_3
{
    class Masini
    {
        private string brand;
        private string model;
        private double price;

        public Masini(string brand, string model, double price)
        {
            this.brand = brand;
            this.model = model;
            this.price = price;
        }

        public string GetBrand()
        {
            return brand;
        }

        public void SetBrand(string brand)
        {
            this.brand = brand;
        }

        public string GetModel()
        {
            return model;
        }

        public void SetModel(string model)
        {
            this.model = model;
        }

        public double GetPrice()
        {
            return price;
        }

        public void SetPrice(double price)
        {
            this.price = price;
        }

        public override string ToString()
        {
            return "[" + brand + "|" + model + "|" + price + "$]";
        }
    }
}
