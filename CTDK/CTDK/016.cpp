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
	int x9 = x8 * x;
	cout << "x9 bang: " << x9 << endl;
	return 0;
}