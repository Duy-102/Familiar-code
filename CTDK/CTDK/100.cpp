#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = pow(s + t, 1 / t);
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}