#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n:";
	cin >> n;
	int s = 0;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	cout << "SL so chan la : " << s << endl;
	return 0;
}