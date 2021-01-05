using System;
using System.Collections;
namespace gokhan_dogan_191307066_hafta4_odev4
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
        static void nfonk(ArrayList a)
        {
            foreach (var i in a)
                {   
                    Console.WriteLine(i);
                    Console.WriteLine(i.GetType());
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
            ArrayList dizi = new ArrayList();

            Console.WriteLine("bir değer giriniz");
            string deger = Console.ReadLine();
            object kontrol;
            int kontrol_2 = 0;
            while (deger!="H")
            {
                
                try
                {
                    kontrol = Convert.ToInt32(deger);
                    dizi.Add(kontrol);
                    kontrol_2 = 1;
                }
                catch (Exception)
                { }
                if (kontrol_2 != 1)
                { try
                    {
                        kontrol = Convert.ToDouble(deger);
                        dizi.Add(kontrol);
                        kontrol_2 = 2;
                    }
                    catch (Exception)
                    { }
                }
                if (kontrol_2!=1&&kontrol_2!=2)
                {
                    try
                    {
                        kontrol = Convert.ToBoolean(deger);
                        dizi.Add(kontrol);
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
                        dizi.Add(kontrol);
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
                        dizi.Add(kontrol);
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
                        dizi.Add(kontrol);
                    }
                    catch (Exception)
                    { }
                }
                kontrol_2 = 0;
                Console.WriteLine("bir değer giriniz");
                deger = Console.ReadLine();

            }
            
            nfonk(dizi);
           
            Console.ReadKey();


        }
    }
}
