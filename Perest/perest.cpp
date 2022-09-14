#include <iostream>
#include <time.h>
#include "perest.h"
using namespace std;
int moving::factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n > 0) {
		int fact = 1;
		for (int i = 1; i < n + 1; i++) {
			fact = fact * i;
		}
		return fact;
	}
}
void moving::swap(int a[], int i, int j)
{
	int s = a[i];
	a[i] = a[j];
	a[j] = s;
}
void moving::Gen_Perm(int array[], int n)
{
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}
	SortBubble(array, 0, n);
	cout << "№:1" << "\t";
	for (int z = 0; z < n; z++) {
		cout << array[z] << "\t";
	}
	cout << endl;
	for (int cyk = 2; cyk < factorial(n) + 1; cyk++) {
		perem(arr, n);
		cout << "№:" << cyk << "\t";
		for (int z = 0; z < n; z++) {
			cout << array[arr[z]] << "\t";
		}
		cout << endl;
	}
}
void moving::perem(int arr[], int n) {//перестановка(1 крок)
	int min = 0;
	for (int i = n - 1; i >= 0; i--)
	{	//лів Аі < прав Аі+1
		if (arr[i] <= arr[i + 1])
		{
			SortBubble(arr, i + 1, n);
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] > arr[i])
				{
					min = j;
					j = n;
				}
			}
			swap(arr, i, min);
			i = 0;
		}
	}
}
void moving::SortBubble(int array[], int start, int n) {//сортування бульбашкою	
	int temp;
	int z = start;
	//int f = 0;
	int c = n - start;
	int* small = new int[c];
	int newn = 0;
	for (int i = start; i < n; i++) {
		small[newn] = array[i];
		newn++;
	}
	newn = 0;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c - i; j++) {
			if (small[j - 1] > small[j]) {
				temp = small[j - 1];
				small[j - 1] = small[j];
				small[j] = temp;
			}
		}
	}
	newn = 0;
	for (int i = start; i < n; i++) {
		array[i] = small[newn];
		newn++;
	}
}



