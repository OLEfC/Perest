#include "password.h"
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;
void pass::zapo(int* array, int n) {
	for (int i = 0; i < n; i++) {
		array[i] = i;


	}//створенн€ масиву  з n улемент≥в дл€ сорьуванн€
}
void pass::ranom(int n) {
	srand(time(0));
	string data = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#%$%&'()*+,-./;:<=>?@[\]^_`{|}~";//вс≥ можлив≥ символи €к≥ використовуютьс€€ в парол≥
	string parol = "";
	int* array = new int[n];
	zapo(array, n);
	for (int i = 0; i < n; i++) {
		parol = parol + data[rand() % 93];
	}//генеруванн€ паролю
	cout << "«генерований пароль" << "\t";
	for (int z = 0; z < n; z++) {
		cout << parol[z];
		//вивеленн€ згенерованого паролю
	}
	cout << endl;
	system("pause");
	cout << "є:1" << "\t";
	for (int z = 0; z < n; z++) {
		cout << parol[z];
	}
	cout << endl;
	for (int cyk = 2; cyk < moving::factorial(n) + 1; cyk++) {
		moving::perem(array, n);
		cout << "є:" << cyk << "\t";
		for (int z = 0; z < n; z++) {
			cout << parol[array[z]];
		}
		cout << endl;//виведенн€ вс≥х можливих вар≥ант≥в паролю ≥з згенерованих 
	}
}

