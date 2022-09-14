#include <iostream>
#include"perest.h"
#include"password.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian");
	moving pryklad;
	pass parol;
	int n;
	int menu;
	do {
		cout << "1-«генеруати пароль \n2-√енеруванн€ перестановки\n3-¬их≥д \n";
		cin >> menu;
		if (menu == 1) {
			cout << "¬вед≥ть к≥льк≥сть елемент≥в паролю" << endl;
			cin >> n;
			parol.ranom(n);
		}
		if (menu == 2) {
			cout << "¬вед≥ть довжину масиву" << endl;
			cin >> n;
			int* array = new int[n];
			cout << "¬вед≥ть елементи масиву" << endl;
			for (int i = 0; i < n; i++) {
			
				cin >> array[i];
			}
			pryklad.Gen_Perm(array, n);
		
		}
		
	} while (menu != 3);

	return 0;;

}