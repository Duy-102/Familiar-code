#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem + 1;
		i += 1;
	}
	cout << "so luong uoc so la: " << dem << endl;
	return 0;
}