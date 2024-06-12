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
	int c;
	cout << "nhap c = ";
	cin >> c;

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	cout << "thu tu tang dan la: " << a << " " << b << " " << c << endl;
	return 0;
}