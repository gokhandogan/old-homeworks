using System;

namespace çalışma_örnek
{
    class Zaman
    {
        public int sa;
        public int dk;
        public int sn;
        public Zaman(int st, int d, int s)
        {
            sa = st; dk = d; sn = s;
        }
        public Zaman(int st, int d)
        {
            sa = st; dk = d;
        }

        public Zaman(Zaman YeniZaman)
        {
            sa = YeniZaman.sa;
            dk = YeniZaman.dk;
            sn = YeniZaman.sn;
        }
        public void yaz()
        {
            Console.WriteLine(sa);
            Console.WriteLine(dk);
            Console.WriteLine(sn);

        }


        class Yikici
        {
            ~Yikici()
            {
                Console.WriteLine("ikici çalişti…");
            }
        }

        class Program
        {
            static void Main(string[] args)
            {
                Yikici y = new Yikici();
                Console.WriteLine("son satir....");

            }
        }
    }
}

