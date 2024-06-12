#include<iostream>
using namespace std;
int main()
{
	int k;
	cout << "nhap k: ";
	cin >> k;
	int n;
	cout << "nhap n: ";
	cin >> n;

	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i++;
	}
	cout << " tong day luy thua la: " << s << endl;
	return 0;
}