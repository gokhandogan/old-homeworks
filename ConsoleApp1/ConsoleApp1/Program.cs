using System;
using System.Diagnostics;
using System.Collections;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string metin = "Raporları taslak olarak son teslim tarihi 12 Haziran 2020, " +
                 "Proje raporunun son halinin teslimi jüri sınav " +
                 "günü(30 Haziran 2020'dir)!Proje soru ve önerileriniz " +
                 "için: 'yselim@kocaeli.edu.tr' mailine bilgilendirme gönderiniz!Duyurular " +
                 "için www.kocaeli.edu.tr sayfasını takip edin!";
            metin=metin.Replace("Proje", "Proje B");
            Console.WriteLine(metin);
            metin = metin.Replace("Haziran 2020", "Mayıs 2021");
            Console.WriteLine(metin);
            string web_linki = metin.Substring(metin.IndexOf("www."),metin.LastIndexOf(".tr")+3-metin.IndexOf("www."));
            Console.WriteLine(web_linki);
            //Process.Start("C:\\Users\\Public\\Desktop","https://"+web_linki);
            string mail_linki = metin.Substring(metin.LastIndexOf("'",metin.IndexOf("@")), metin.IndexOf(".tr'") + 4 - metin.LastIndexOf("'", metin.IndexOf("@")));
            Console.WriteLine(mail_linki);
            //System.Diagnostics.Process.Start("https://"+mail_linki);
            metin = metin.ToLower();
            Console.WriteLine(metin);
            mail_linki = mail_linki.Remove(0,1);
            mail_linki = mail_linki.Remove(mail_linki.Length-1, 1);
            Console.WriteLine(mail_linki);
            if (metin.Contains("@"))
                Console.WriteLine("evet mevcut");
            else
                Console.WriteLine("hayır değil");
            string kullanıcı_adı = mail_linki.Substring(0, mail_linki.IndexOf("@"));
            Console.WriteLine(kullanıcı_adı);
            string[] donus = metin.Split(" ");
            foreach (string i in donus)
            {
                Console.WriteLine(i);
            }

                                          
            Console.ReadKey();
        }
    }
}
