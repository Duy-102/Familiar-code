#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	int i = 1;
	int s = 0;
	while (i <= n)
	{
		s = s + i * i * i;
		i++;
	}
	cout << "tong s la: " << s << endl;

	return 0;
}