// Lab_03_4.cpp
// < Пастушук Андрій >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 21
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;  // вхідний аргумент
	double y;  // вхідний параметр
	double r;  // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	// розгалуження в повній формі
	if (x * x + y * y <= r*r && abs(y) >= abs(x))cout << "yes" << endl;
	else cout << "no" << endl;
	cin.get();
	return 0;
}
