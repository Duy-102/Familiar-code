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
	int y1;
	cout << "nhap y1: ";
	cin >> y1;
	int y2;
	cout << "nhap y2: ";
	cin >> y2;
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "khoang cach d la: " << d << endl;
	return 0;
}