#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//дан массив целых чисел размером 5 ввести в него данные и вывести данные на экран в одну строку
	/*int mas[5];
	for (int i = 0; i < 5; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << mas[i] << ' ';
	}*/
	//Дан массив целых чисел (положительных и отрицательных) размером 10. Ввести данные в массив, вывести в одну строку. Найти кол-во положительных чисел в массиве.
	/*const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) k++;
	}
	cout << ">0" << k << endl;*/
	//1 Дан массив целых чисел (положительных и отрицательных) размером 10. 
	//Ввести данные в массив, вывести в одну строку В ОБРАТНОМ ПОРЯДКЕ (от посленего номера к первому)
	/*const int size = 10;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << mas[i] << ' ';
	}*/
	//2 Дан массив целых чисел (положительных и отрицательных) размером 8. 
	//Ввести данные в массив, вывести в одну строку. Найти сумму четных элементов
	/*const int size = 8;
	int summa = 0;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
		if (mas[i] % 2 == 0) {
			summa += mas[i];
		}
	}
	cout << summa << endl;*/
	//3 Дан массив целых чисел (положительных и отрицательных) размером 5. 
	//Ввести данные в массив, вывести в одну строку. Найти произведение элементов с ЧЕТНЫМИ НОМЕРАМИ (0, 2 и т.д.)
	/*const int size = 5;
	int prois = 1;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
		if (mas[i] % 2 == 0) {
			prois *= mas[i];
		}
		for (int i = 0; i < size; i++) {
			cout << mas[i] << " ";
	}
	}
	cout << prois << endl;*/



}