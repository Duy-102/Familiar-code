#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int t = 1;
	int i = 1;
	while (i <=n )
	{
		t = t * i;
		s = sqrt(t + s);
		i++;
	}
	cout << "Tong la: " << s << endl;
	return 0;
}