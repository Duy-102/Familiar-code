#include<iostream>
using namespace std;
int main()
{
	int x1;
	cout << "nhap x1: ";
	cin >> x1;
	int x2;
	cout << "nhap x2: ";
	cin >> x2;
	int x3;
	cout << "nhap x3: ";
	cin >> x3;
	int y1;
	cout << "nhap y1: ";
	cin >> y1;
	int y2;
	cout << "nhap y2: ";
	cin >> y2;
	int y3;
	cout << "nhap y3: :";
	cin >> y3;
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p = a + b + c;
	cout << "chu vi tam giac la:" << p << endl;
	return 0;
}