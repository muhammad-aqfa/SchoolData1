using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {

            student c1 = new student("muhammad","tira",10.5);
            Console.WriteLine(c1.GetDtudentDetaitl());
            c1.Growup(4);
            Console.WriteLine(c1.GetDtudentDetaitl());
            c1.happybrithday();
            Console.WriteLine(c1.GetDtudentDetaitl());

        }
    }
}
