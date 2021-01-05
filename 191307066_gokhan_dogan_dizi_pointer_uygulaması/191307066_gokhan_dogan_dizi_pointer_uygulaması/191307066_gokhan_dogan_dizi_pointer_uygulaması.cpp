//GOKHAN DOGAN 191307066


#include <iostream>
using namespace std;
const int boyut = 7;

double ortalamaDizi(double* dizi, int boyut) 
{
	double toplam = 0;
	for (int i = 0; i < boyut; i++)
	{
		toplam = toplam + dizi[i];
	}
	return toplam / boyut;

}

void ArtanDizi(double* dizi, int boyut) 
{
	int y, gecici;

	for (int x = 0; x < boyut; x++)
	{
		for (y = x + 1; y < boyut; y++)
		{
			if (dizi[x] > dizi[y]) 
			{
				gecici = dizi[x];
				dizi[x] = dizi[y];
				dizi[y] = gecici;
			}

		}
	}


}

int main()
{
 
	double dizi[boyut] = {5,4,6,1,3,2,7};
	cout << "Dizinin ortalamasi = " << ortalamaDizi(dizi, boyut) << endl;

	ArtanDizi(dizi, boyut);
	cout << "Dizinin siralanisi \n";
	for (int i = 0; i < boyut; i++)
	{
		cout << dizi[i] << "\t";
	}



	return 0;
}

