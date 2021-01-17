//using System;
//namespace ConsoleApp1
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int n, intger, b, count = 0, x, i;
//            Console.WriteLine("please enter intger:");
//            intger = int.Parse(Console.ReadLine());
//            Console.WriteLine("please enter n:");
//            n = int.Parse(Console.ReadLine());
//            b = intger;
//            while (b > 0)
//            {
//                x = b % 10;
//                b = b / 10;
//                count++;
//            }
//            if (n > 0)
//            {
//                if (n <= 1 && count > 8 && count <= 16)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }

//                else if (count >= 6 && count <= 8 && n <= 2)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else if (count == 5 && n <= 3)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else if (count == 4 && n <= 4)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else if (count == 3 && n <= 5)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else if (count == 2 && n <= 8)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else if (count == 1 && n <= 16)
//                {
//                    for (i = 0; i < n; i++)
//                    {
//                        Console.Write("{0}", intger);
//                    }
//                }
//                else
//                {
//                    Console.WriteLine(" wrong number", intger);
//                }
//                }
//                else
//                {
//                    Console.WriteLine(" n is not bigger than 0");
//                }
//            }
//        }
////}
//using System;
//using System.Collections.Generic;
//using System.Text;
//namespace ConsoleApp1
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {

//            int i = 0, j = 0, n, y = 0;
//            Console.WriteLine(" please enter N :");
//            n = int.Parse(Console.ReadLine());
//            for (i = 0; i < n * 2; i++)
//            {
//                Console.Write("*");
//            }
//            Console.Write("\n");
//            for (i = 1; i < n; i++)
//            {
//                for (j = 1; j <= n * 2; j++)
//                {
//                    if (i + j <= n)
//                    {
//                        Console.Write("*");
//                    }
//                    else if (n + i + 1 == j)
//                    {
//                        for (y = 1; y <= n * 2 - j + 1; y++)
//                        {
//                            Console.Write("*");
//                        }
//                    }
//                    else
//                    {
//                        Console.Write(" ");
//                    }

//                }
//                Console.Write("\n");
//            }

//            for (i = 1; i < n; i++)
//            {
//                for (j = 1; j <= n * 2; j++)
//                {
//                    if (j <= i)
//                    {
//                        Console.Write("*");
//                    }
//                    else if (j >= n * 2 - i + 1)
//                    {
//                        Console.Write("*");
//                    }
//                    else
//                    {
//                        Console.Write(" ");
//                    }
//                }
//                Console.WriteLine();
//            }
//            for (i = 0; i < n * 2; i++)
//            {
//                Console.Write("*");
//            }
//        }

//    }
//}
using System;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0, j = 0, y = 0, n, x = 0;
            Console.WriteLine(" please enter N :");
            n = int.Parse(Console.ReadLine());
            if (n % 2 != 0)
            {
                Console.WriteLine(" The Number is Not Even Try again :");
                return;
            }
            for (x = 0; x < n / 2; x++)
            {
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= i; j++)
                    {
                        if (i == j)
                        {
                            Console.Write("*");
                        }
                        else if (i == n)
                        {
                            if (j < n)
                            {
                                Console.Write("*");
                            }
                        }
                        else if (i + j == n + 1)
                        {
                            Console.Write("*");
                        }
                        else
                        {
                            Console.Write(" ");
                        }
                    }
                    Console.WriteLine();
                }
            }
            for (i = 1; i <= n * 2; i++)
            {
                Console.WriteLine("  **  ");
            }
        }
    }
}