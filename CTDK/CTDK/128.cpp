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
	if (a > b) 
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "gia tri tang dan la: " << a << " " << b << endl;
	return 0;
}