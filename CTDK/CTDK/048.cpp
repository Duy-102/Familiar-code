#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "nhap x = ";
	cin >> x;
	int n;
	cout << "nhap n= ";
	cin >> n;
	float t = x;
	int i = 1;
	while (i<= n)
	{
		t = t * (x + i); 
		i++;
	}
	cout << "tich t la " << t << endl;
	return 0;
}