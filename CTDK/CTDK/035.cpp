#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		i++;
	}
	cout << "tich t la: " << t << endl;
		
	return 0;
}