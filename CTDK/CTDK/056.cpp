#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int i = 2;
    int dem = 0;

    while (i <= n)
    {
        if (n % i == 0)
            dem = dem + 1;
        i += 2;
    }
    cout << "Tong la: " << dem;
    return 0;
}