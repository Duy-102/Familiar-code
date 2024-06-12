#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap gia tri n: ";
	cin >> n;
	float ht = (n / 100) % 10;
	cout << "so hang tram ht la: " << ht << endl;
	return 0;
}