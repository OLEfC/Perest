#include "password.h"
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;
void pass::zapo(int* array, int n) {
	for (int i = 0; i < n; i++) {
		array[i] = i;


	}//��������� ������  � n �������� ��� ����������
}
void pass::ranom(int n) {
	srand(time(0));
	string data = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#%$%&'()*+,-./;:<=>?@[\]^_`{|}~";//�� ������ ������� �� ����������������� � �����
	string parol = "";
	int* array = new int[n];
	zapo(array, n);
	for (int i = 0; i < n; i++) {
		parol = parol + data[rand() % 93];
	}//����������� ������
	cout << "������������ ������" << "\t";
	for (int z = 0; z < n; z++) {
		cout << parol[z];
		//��������� ������������� ������
	}
	cout << endl;
	system("pause");
	cout << "�:1" << "\t";
	for (int z = 0; z < n; z++) {
		cout << parol[z];
	}
	cout << endl;
	for (int cyk = 2; cyk < moving::factorial(n) + 1; cyk++) {
		moving::perem(array, n);
		cout << "�:" << cyk << "\t";
		for (int z = 0; z < n; z++) {
			cout << parol[array[z]];
		}
		cout << endl;//��������� ��� �������� ������� ������ �� ������������ 
	}
}

