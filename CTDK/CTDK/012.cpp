#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << " nhap x =";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x6 = x2 * x4;
	cout << "x6 bang: " << x6 << endl;
	return 0;
}