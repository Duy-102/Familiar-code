#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n:";
	cin >> n;
	int tich = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	cout << "tich so le la : " << tich << endl;
	return 0;
}