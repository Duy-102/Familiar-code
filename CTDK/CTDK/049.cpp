#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << "gia tri cua i la :" << i << endl;
		i++;
	}
	return 0;
}