#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap gia tri n: ";
	cin >> n;
	float hc = (n /10)% 10;
	cout << "so hang chuc dc la: " << hc << endl;
	return 0;
}