#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int dt = abs(n);
    while (dt >= 10)
        dt =dt/ 10;
    cout << "Chu so dau tien cua so nguyen duong n = " << n << " la: " << dt << endl;
    return 0;
}