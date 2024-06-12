#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "nhap gia tri a= ";
	cin >> a;
	int b;
	cout << "nhap gia tri b= ";
	cin >> b;
		int temp = a;
		a = b;
		b = temp;
		cout << "gia tri cua a la:  " << a << endl;
		cout << "gia tri cua b la:  " << b << endl;

	return 0;
}