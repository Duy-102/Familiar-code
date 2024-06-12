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
	int x12 = x10 * x2;
	int x13 = x12 * x;
	cout << "x13 bang: " << x13 << endl;
	return 0;
}