/*
	Emre Tekin
	Bil122 - 2019 Bahar --> Odev 1
	Bu program kullanicidan alinan boyutta bir ucgen veya elmas sekli basar. Sekiller '*' ile basilir.
	*/

#include <iostream>

using namespace std;

void duzUcgen(int);
void tersUcgen(int);
void elmas(int);


int main()
{
	int size; //triangle size
	int action; //variable to selecting action

	cout << "Lutfen gerceklestirmek istediginiz eylemi seciniz" << endl << endl;
	cout << "1. Duz Ucgen Cizmek" << endl;
	cout << "2. Ters Ucgen Cizmek" << endl;
	cout << "3. Elmas Cizmek" << endl;
	cout << "4. Cikis" << endl << endl;

	cin >> action;

	system("cls");

	if (action == 1) {
		cout << "Cizmek istediginiz seklin boyutunu giriniz (boyutunuz 3 ile 15 arasinda ve tek sayi olmak zorundadir!)" << endl;
		cin >> size;
		system("cls");
		duzUcgen(size);
	}

	if (action == 2) {
		cout << "Cizmek istediginiz seklin boyutunu giriniz (boyutunuz 3 ile 15 arasinda ve tek sayi olmak zorundadir!)" << endl;
		cin >> size;
		system("cls");
		tersUcgen(size);
	}

	if (action == 3) {
		cout << "Cizmek istediginiz seklin boyutunu giriniz (boyutunuz 5 ile 15 arasinda ve tek sayi olmak zorundadir!)" << endl;
		cin >> size;
		system("cls");

		int tryingTime = 1;
		for (int a = 0; a < tryingTime; ++a) {

			if (size < 5 || size > 15 || size % 2 != 1)
			{
				system("cls");
				cout << "Lutfen uygun sayi giriniz! (5 ve 15 arasinda ve tek sayi)" << endl;
				cin >> size;
				tryingTime++;
			}

			if (tryingTime > 2) {
				system("cls");
				cout << "Program sonlandirildi!";
				return 0;
			}
		}

		elmas(size);
	}

	if (action == 4) {
		return 0;
	}

	return 0;
}


void duzUcgen(int size) { //saatler suren ugras sonucunda internette aradim ve bir yol bulup yardim aldim (https://www.programiz.com/cpp-programming/examples/pyramid-pattern)
						  //bu yolda yazan kisi satir sayisi alarak while dongusu kullaniyordu. Bu donguyu for'a cevirdim ve sizin istediginiz gibi boyut alip satir sayisini hesaplattim.

	int space;
	int tryingTime = 1;
	int rows;	rows = (size / 2) + 1;


	for (int a = 0; a < tryingTime; ++a) {

		if (size < 3 || size > 15 || size % 2 != 1)
		{
			system("cls");
			cout << "Lutfen uygun sayi giriniz! (3 ve 15 arasinda ve tek sayi)" << endl;
			cin >> size;
			tryingTime++;
		}

		if (tryingTime > 2) {
			system("cls");
			cout << "Program sonlandirildi!";
			return;
		}
	}

	for (int i = 1; i <= rows; ++i)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			cout << "  ";
		}

		for (int k = 0; k < (i * 2) - 1; ++k)//bir satira kac tane '*' basilacak.
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void tersUcgen(int size) {

	int tryingTime = 1;
	int rows;	rows = (size / 2) + 1;


	while (tryingTime != 3) {

		if (size < 3 || size > 15 || size % 2 != 1)
		{
			system("cls");
			cout << "Lutfen uygun sayi giriniz! (3 ve 15 arasinda ve tek sayi)" << endl;
			cin >> size;
			tryingTime++;
		}

		if (tryingTime > 2) {
			system("cls");
			cout << "Program sonlandirildi!";
			return;
		}
		++tryingTime;
	}

	int i = rows;//while loop variable
	while (i > 0) {

		int space = rows;
		while (space > 5) {

			cout << "  ";
			--space;
		}

		int k = (i * 2) - 2;
		while (k > -1) {

			cout << "* ";
			--k;
		}
		cout << endl;
		--i;
		rows++;
	}




}

void elmas(int size) {

	duzUcgen(size);
	tersUcgen(size);
}