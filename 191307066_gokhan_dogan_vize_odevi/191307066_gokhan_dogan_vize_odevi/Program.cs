using System;
using System.Collections;
namespace gokhan_dogan_191307066_vize_odevi
{
    class Program
    {
        static void yaz(Int32 a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(double a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(long a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(char a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(byte a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(bool a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static void yaz(string a)
        {
            Console.WriteLine(a);
            Console.WriteLine(a.GetType());
        }
        static ArrayList dizi = new ArrayList();
        static void nfonk(params object[] a)
        {
            char z='g';
            try
            {
                z = Convert.ToChar(a[0]);
            }
            catch
            { }

            if (z=='H')
                {
                foreach (var i in dizi)
                {
                    Console.WriteLine(i);
                    Console.WriteLine(i.GetType());
                }
                

                }
            else
            {
                dizi.Add(a[0]);
            }

            
        }
        static void Main(string[] args)
        {
            Int32 x = 5;
            yaz(x);
            double y = 5.5;
            yaz(y);
            long c = 6;
            yaz(c);
            char d = 'a';
            yaz(d);
            byte e = 5;
            yaz(e);
            bool f = true;
            yaz(f);
            string g = "gökhan";
            yaz(g);
            
            string deger = "a";
            object kontrol;
            int kontrol_2 = 0;
            while (deger != "H")
            {
                Console.WriteLine("bir değer giriniz");
                deger = Console.ReadLine();
                try
                {
                    kontrol = Convert.ToInt32(deger);
                    nfonk(kontrol);
                    kontrol_2 = 1;
                }
                catch (Exception)
                { }
                if (kontrol_2 != 1)
                {
                    try
                    {
                        kontrol = Convert.ToDouble(deger);
                        nfonk(kontrol);
                        kontrol_2 = 2;
                    }
                    catch (Exception)
                    { }
                }
                if (kontrol_2 != 1 && kontrol_2 != 2)
                {
                    try
                    {
                        kontrol = Convert.ToBoolean(deger);
                        nfonk(kontrol);
                        kontrol_2 = 3;
                    }
                    catch (Exception)
                    { }
                }
                if (kontrol_2 != 1 && kontrol_2 != 2 && kontrol_2 != 3)
                {
                    try
                    {
                        kontrol = Convert.ToChar(deger);
                        nfonk(kontrol);
                        kontrol_2 = 4;
                    }
                    catch (Exception)
                    { }
                }
                if (kontrol_2 != 1 && kontrol_2 != 2 && kontrol_2 != 3 && kontrol_2 != 4)
                {
                    try
                    {
                        kontrol = float.Parse(deger);
                        nfonk(kontrol);
                        kontrol_2 = 5;
                    }
                    catch (Exception)
                    { }
                }
                if (kontrol_2 != 1 && kontrol_2 != 2 && kontrol_2 != 3 && kontrol_2 != 4 && kontrol_2 != 5)
                {
                    try
                    {
                        kontrol = Convert.ToString(deger);
                        nfonk(kontrol);
                    }
                    catch (Exception)
                    { }
                }
                kontrol_2 = 0;
                

            }

           

            Console.ReadKey();


        }
    }
}
