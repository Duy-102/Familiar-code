#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	int  dem = 0;
	int t = n;
	while (t != 0)
	{
		dem = dem + 1;
		t = t / 10;                                        //thut t vao
	}
	cout << "SL cac chu so la: " << dem << endl;
	return 0;
}