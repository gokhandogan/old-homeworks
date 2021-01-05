using System;
using System.Collections;

namespace gokhan_dogan_191307066_hafta3_odev3
{
    class Program
    {
        static void yazdir(double a,double b)
        {
            a = a * a;
            b = b * b;
            Console.WriteLine("birinci değer = "+ a);
            Console.WriteLine("ikinci değer = " + b);
        }
        static void yazdir_2(ref double a, ref double b)
        {
            a = a * a;
            b = b * b;
            Console.WriteLine("birinci değer = " + a);
            Console.WriteLine("ikinci değer = " + b);

        }
        static void Main(string[] args)
        {
            Console.WriteLine("birinci double değerini giriniz.");
            double x = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("ikinci double değerini giriniz.");
            double y = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("birinci metodu deneyelim");
            yazdir(x, y);
            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine("ikinci metodu deneyelim");
            yazdir_2(ref x, ref y);
            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.ReadKey();
        }
    }
}
