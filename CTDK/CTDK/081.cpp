#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;

	float s = 1.0/x;
	int m = x;
	int i = 1;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (float)1 / m;
		i++;
	}
	cout << " tong day  la: " << s << endl;
	return 0;
}