#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;

	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + i * t;
		i++;
	}
	cout << " tong day  la: " << s << endl;
	return 0;
}