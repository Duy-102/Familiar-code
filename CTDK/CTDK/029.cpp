#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	double s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)1/i;
		i++;
	}
	cout << "tong S = " << s << endl;
	return 0;
}