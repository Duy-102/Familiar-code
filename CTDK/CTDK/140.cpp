#include <iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float c;
	cout << "Nhap c: ";
	cin >> c;

	float delta = b * b - 4 * a * c;

	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x = -b / (2 * a);
			cout << "Phuong trinh co nghiem kep x=  " << x;
		}
		else
		{
			cout << "Phuong trinh vo nghiem";
		}
	}
	else
	{
		float x1 = (-b - sqrt(delta)) / (2 * a);
		float x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co 2 ngiem phan biet x1, x2" << endl;
		cout << "x1 =  " << x1 << endl;
		cout << "x2 =  " << x2 << endl;
	}
	return 0;
}