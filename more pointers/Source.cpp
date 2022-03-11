#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
void func(int* pn1, int* pn2) {
	if (pn1 == nullptr || pn2 == nullptr)
		cout << "Один из указателей нейтрален\n";
	else {
		cout << "pn1 = " << pn1 << endl;
		cout << "pn2 = " << pn2 << endl;
	}
}
void mySwap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pSwap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
void refSwap(int& num1, int& num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "ВВедите два чсила: ";
	cin >> x >> y;
	//mySwap(x, y);
	//pSwap(&x, &y);
	refSwap(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	int n = pow(2, 2);

















	/*int n = 10, m = 20;
	int arr[3] = { 1, 2, 3 };
	arr = &n;//arr - указатель константа на нулевой элемент массива.*/


	//константный указатель на константу            Одна ячейка, менять нельзя.
	/*const int* const pn = &n;
	cout << pn << " = " << *pn << endl;*/


	//Указатель на константу   Запрещает изменение переменной
	/*const int* pn;
	pn = &n;
	cout << pn << " = " << *pn << endl;
	pn = &m;
	cout << pn << " = " << *pn << endl;*/


	//Указатель-константа      Всегда указывает на одну ячейку оперативной памяти.
	/*int* const pn = &n;
	cout << pn << " " << *pn<<endl;
	*pn = 15;
	cout << pn << " " << *pn<<endl;*/

	/*int n = -1;
	cin >> n;
	cout << n << endl;
	int* pn=nullptr;
	pn = &n;
	if(pn!=nullptr)
		cout << pn<<endl;*/









	return 0;
}