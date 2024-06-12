#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "nhap a = ";
	cin >> a;
	int b;
	cout << "nhap b = ";
	cin >> b;

	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;

	cout << "gia tri cua a la: " << a << endl;
	cout << "gia tri cua b la: " << b << endl;
	return 0;
}