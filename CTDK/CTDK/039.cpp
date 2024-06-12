#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	int i = 1;
	double t = 1;
	while (i <= n)
	{
		t = t * ((1 + 1 / (static_cast<double>(i) * i)));
		i++;
	}
	cout << "tich s la: " << t << endl;

	return 0;

}