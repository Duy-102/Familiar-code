#include<iostream>

using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;

	float s = 0;
	int t = 1;
	int m = 1;
	int i = 1;

	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + (float)t / m;
		i += 1;

	}
	cout << "tong la: " << s << endl;

	return 0;
}