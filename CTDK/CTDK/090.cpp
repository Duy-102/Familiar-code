#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float t = 1;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + dau * t / m;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}