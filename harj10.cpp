/***********************************
* Harjoitus 10
* Paulus Linna
* IIA14SB
* Teht�v�kuvaus:
*	Tee ohjelma, joka laskee sy�tetyist� kokonaisluvuista sek� positiivisten
*	ett� negatiivisten kokonaislukujen osuuden. Lukujen sy�tt� lopetetaan
* sy�tt�m�ll� luku 0.
*
*	Tulostus:
*	Sy�tit kokonaislukuja seuraavasti:
*	----------------------------------
*	Negatiiviset 7 kpl 70.00%
*	Positiiviset 3 kpl 30.00%
*	Yhteens� 10 kpl 100.00%
*
* P�iv�m��r�: 2.10.2014
* Versio: 1.0
***********************************/
#include <iostream>
using namespace std;
int main()
{
	int lkmp = 0;
	int lkmn = 0;
	int lkm = 0;
	int numero;
	cout << "Anna kokonaislukuja. Lukujen syotto lopetetaan syottamalla luku 0\n";

	while (cin >> numero)
	{
		if (numero == 0)
			break;

		else if (numero < 0){
			lkmn++;
			lkm++;
		}

		else if (numero > 0){
			lkmp++;
			lkm++;
		}

	}
	cout << "\nPositiivisia lukuja on: " << lkmp;
	cout << "\nNegatiivisia lukuja on: " << lkmn;
	cout << "\nLukuja yhteensa: " << lkm;

	
	return 0;
}