#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap nam can tinh: ";
    cin >> n;
    bool dk1 = ((n % 4 == 0) && (n % 100) != 0);
    bool dk2 = (n % 400 == 0);
        if (dk1 || dk2)
            cout << "nam "<<" " << n << " la nam nhuan" << endl;
        else
            cout << "nam" <<" "<< n << " khong phai nam nhuan" << endl;

	return 0;
}