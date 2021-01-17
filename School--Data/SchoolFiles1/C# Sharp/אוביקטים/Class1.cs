using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp1
{
    class student
    {
        private string name, address;
        private double age;

        public student(string n, string a, double age)
        {
            Name = n;
            Address = a;
            Age = age;
        }
        public string Name {  get; private set; }
        public string Address { get; private set; }
        public double Age
        {
            get { return age; }
                private set
            {
                age = (value >= 0 && value <= 120) ? value : 0;
            }
        }
        public void Growup(int years)
        {
            age += (years >= 0 && years <= 10) ? years : 0;
        }
        public void happybrithday()
        {
            Growup(1);
        }
        public string GetDtudentDetaitl()
        {
            string str = "";
            str += $"student Name:{Name}\n";
            str += $"student age:{Age}\n";
            str += $"student address:{Address}\n";
            return str;
        }

    }
}
