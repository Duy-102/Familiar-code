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
	int lc = a;
	if (lc < b)
		lc = b;

	cout << "gia tri lon nhat la :  " << lc << endl;
	
	return 0;
}