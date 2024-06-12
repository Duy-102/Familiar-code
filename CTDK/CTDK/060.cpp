#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	int T = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		T = T * dv;
		t = t / 10;
	}
	cout << "tich cac chu so la: " << T << endl;
	return 0;
}