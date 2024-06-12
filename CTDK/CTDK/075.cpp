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

	float s = 1;
	int t = 1;
	int m = 1;
	int i = 2;

	while (i <= 2*n)
	{
		t = t * x * x; 
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i += 2;

	}
	cout << "tong la: " << s << endl;

	return 0;
}