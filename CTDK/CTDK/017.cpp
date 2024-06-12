#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << " nhap x =";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x10 = x2 * x8;
	int x11 = x10 * x;
	cout << "x11 bang: " << x11 << endl;
	return 0;
}