// Gokhan-Dogan-191307066


#include <iostream>
using namespace std;

//5 - C++ ile Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayınız.
float not_ortalama(float a, float b)
{
	return (a * 0.4 + b * 0.6);
}

//6 - C++ ile Fonksiyon kullanarak dikdörtgen alan ve çevre hesaplayan örneği oluşturunuz
int alan(int a, int b)
{
	return a * b;
}

int cevre(int a, int b)
{
	return a * 2 + b * 2;
}


int main()
{
	//1 - Kullanıcının seçimine göre toplama veya çıkarma işlemi yapan programı yazınız
	int a, b;
	char c;
	cout << "birinci sayiyi giriniz: ";
	cin >> a;
	cout << "ikinci sayiyi giriniz: ";
	cin >> b;
	cout << "lutfen yapilacak islemi seciniz.\n";
	cout << "toplama icin : -t- ye basiniz.\n";
	cout << "cikarma icin : -c- ye basiniz.\n";
	cin >> c;
	if (c == 't')
	{
		cout << "sayilerin toplamlari= " << a + b<<endl;
	}
	else
	{
		cout << "sayilerin cikarimi= " << a - b << endl;
	}
	//2-Klavyeden girilen sayıya ve seçime göre matemtiksel işlemleri yapan programı yazınız.1:Karekok, 2:Kare, 3:Mutlak Deger
	int d;
	char e;
	cout << "bir sayiyi giriniz: ";
	cin >> d;
	cout << "lutfen yapilacak islemi seciniz.\n";
	cout << "karekok icin : -k- ye basiniz.\n";
	cout << "kare icin : -r- ye basiniz.\n";
	cout << "mutlak deger icin : -m- ye basiniz.\n";	
	cin >> e;
	if (e == 'k')
	{
		cout << "sayinin karekoku= " << sqrt(d)<<endl;
	}
	else if (e == 'r')
	{
		cout << "sayinin karesi= " << d * d<<endl;
	}
	else
	{
		if (d < 0)
		{
			cout << "sayinin mutlak degeri= " << -d<<endl;
		}
		else
		{
			cout << "sayinin mutlak degeri= " << d<<endl;
		}
	}
	//3 - Klavyeden - 1 girilene kadar, girilen sayıların ortalamalarını gösteren programı yazınız
	float toplam = 0,sayi=0,sayac=-1;
	float ortalama;
	while (sayi != -1 )
	{
		toplam = toplam + sayi;
		sayac++;
		cout << "bir sayiyi giriniz: ";
		cin >> sayi;
		
	}
	ortalama = toplam / sayac;
	cout << "sayilerin ortalamasi = " << ortalama<<endl;

	//4 - Klavyeden girilen rakamlari farkli 4 basamakli sayinin basamaklarini bulan programı C++ ile yazınız.Sayi 4 basamakli olmazsa hata verecek!Sayının rakamlari farkli olmazsa hata verecek!
	
	int sayi_2,birler,onlar,yuzler,binler;
	cout << "dort basamakli bir sayi giriniz. :";
	cin >> sayi_2;
	if (sayi_2 < 10000 && sayi_2>999)
	{
		birler = sayi_2 % 10;
		onlar = (sayi_2 / 10)%10;
		yuzler = (sayi_2 / 100)%10;
		binler = sayi_2 / 1000;
		if (birler != onlar && birler != yuzler && birler != binler && onlar != yuzler && onlar != binler && yuzler != binler)
		{
			cout << sayi_2 << " sayisinin basamaklari :"<<endl;
			cout << "birler basamagi: "<< birler<<endl;
			cout << "onlar basamagi: " << onlar<<endl;
			cout << "yuzler basamagi: " << yuzler<<endl;
			cout << "binler basamagi: " << binler<<endl;
		}
		else
		{
			cout << "yanlis giris yaptiniz."<<endl;
		}
			
			
	}
	else
	{
		cout << "yanlis giris yaptiniz."<<endl;
	}

	//5-C++ ile Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayınız.
	float vize, final;
	cout << "vize notunu giriniz: ";
	cin >> vize;
	cout << "final notunu giriniz: ";
	cin >> final;
	cout << "not ortalamasi = " << not_ortalama(vize, final)<<endl;

	//6-C++ ile Fonksiyon kullanarak dikdörtgen alan ve çevre hesaplayan örneği oluşturunuz
	int uzun_kenar, kisa_kenar;
	cout << "uzun kenari giriniz: ";
	cin >> uzun_kenar;
	cout << "kisa kanari notunu giriniz: ";
	cin >> kisa_kenar;
	cout << "dikdortgenin alani = " << alan(uzun_kenar,kisa_kenar)<<endl;
	cout << "dikdortgenin cevresi = " << cevre(uzun_kenar, kisa_kenar) << endl;



	return 19;
}
