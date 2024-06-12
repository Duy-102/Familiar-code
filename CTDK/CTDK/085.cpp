#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << " nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;

	float s = 0;
	int t = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + dau * t;
		dau = -dau;
		i++;
	}
	cout << "tong day la: " << s << endl;
	return 0;
}