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
		cout << "1-���������� ������ \n2-����������� ������������\n3-����� \n";
		cin >> menu;
		if (menu == 1) {
			cout << "������ ������� �������� ������" << endl;
			cin >> n;
			parol.ranom(n);
		}
		if (menu == 2) {
			cout << "������ ������� ������" << endl;
			cin >> n;
			int* array = new int[n];
			cout << "������ �������� ������" << endl;
			for (int i = 0; i < n; i++) {
			
				cin >> array[i];
			}
			pryklad.Gen_Perm(array, n);
		
		}
		
	} while (menu != 3);

	return 0;;

}