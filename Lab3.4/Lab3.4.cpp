// Lab_03_4.cpp
// < �������� ����� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 21
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;  // ������� ��������
	double y;  // ������� ��������
	double r;  // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	// ������������ � ����� ����
	if (x * x + y * y <= r*r && abs(y) >= abs(x))cout << "yes" << endl;
	else cout << "no" << endl;
	cin.get();
	return 0;
}
