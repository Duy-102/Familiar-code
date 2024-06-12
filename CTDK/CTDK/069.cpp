#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "nhap x: ";
	cin >> x;
	int n;
	cout << "nhap n: ";
	cin >> n;
	int s = 0;
	int i = 1;
	int t = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i++;
	}
	cout << "tong day gia thua la: " << s << endl;
	return 0;
}