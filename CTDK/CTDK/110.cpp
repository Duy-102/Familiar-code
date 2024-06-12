#include <iostream>
using namespace std;

int main()
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;

	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << "Gia tri cua chuoi vo han Leibniz pi la: " << s << endl;
	return 0;
}