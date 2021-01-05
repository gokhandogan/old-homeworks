

#include <iostream>
#include <stdlib.h>
#include <random>
using namespace std;


void dizi_yaz(int dizi[])
{
	for (int i = 0;i < 10;i++)
	{
		dizi[i] = rnd() % 8 + 3;
		cout << "dizinin " << i << ".ci elemani : " << dizi[i] << endl;
	}
}
int main()
{
	/*int dizi[100];
	for (int i = 0;i < 100;i++)
	{
		dizi[i] = rnd() % 8 + 3;
		cout << "dizinin " << i << ".ci elemani : " << dizi[i]<<endl;
	}
	int dizi_2[100];
	for (int j=0;j < 100;j++)
	{
		dizi_2[j] = dizi[j] * dizi[j];
		cout << "dizi 2 nin " << j << ".ci elemani : " << dizi[j]<<endl;
	}
	*/

	int dizi[10];
	dizi_yaz(dizi);

	return 0;
}

