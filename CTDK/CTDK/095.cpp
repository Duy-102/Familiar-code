#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int i = n;
	while (i > 0)
	{
		s = sqrt(i + s);
		i--;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}