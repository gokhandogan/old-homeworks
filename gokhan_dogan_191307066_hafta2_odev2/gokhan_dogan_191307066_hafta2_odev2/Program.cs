using System;
using System.Collections;
namespace ConsoleApp2
{
    class Program
    {
        static void yazdir(ArrayList a)
        {
            foreach (var i in a)
            {
                Console.WriteLine(i);
            }
            Console.WriteLine(a.Count);
        }
        static void Main(string[] args)
        {
            ArrayList iller = new ArrayList();
            iller.Add("istanbul");
            iller.Add("kocaeli");
            iller.Add("izmir");
            iller.Add("ankara");
            iller.Add("kocaeli");
            iller.Add("erzurum");
            iller.Add("kocaeli");
            yazdir(iller);
            iller.Insert(4, "marmara");
            yazdir(iller);
            iller.Insert(0, "adana");
            yazdir(iller);
            if (iller.Contains("kocaeli"))
                Console.WriteLine("evet var");
            else
                Console.WriteLine("hayır yok");
            iller.Reverse();
            yazdir(iller);
            int indis = -1;
            ArrayList kontrol = new ArrayList();
            do
            {
                indis = iller.IndexOf("kocaeli", indis+1);
                kontrol.Add(indis);
                
            } while (indis >= 0) ;
            kontrol.Remove(-1);
            Console.WriteLine("kocaeli şehrinin iller listesindeki yerleri aşağıdadır:");
            foreach (var i in kontrol)
            {
                Console.WriteLine(i);
            }
            Console.WriteLine("kocaeli şehri iller listesi içinde " + kontrol.Count + " defa geçmektedir.");
            iller.RemoveAt(2);
            iller.RemoveAt(4);
            yazdir(iller);
            iller.Clear();
            yazdir(iller);



            Console.ReadKey();


        }
    }
}