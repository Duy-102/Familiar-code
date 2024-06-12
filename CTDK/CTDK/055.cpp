#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int i = 1;
    int s = 0;
    while (i <= n)
    {
        if (n % i == 0)
            s += i;
        i += 2;
    }
    cout << "Tong la: " << s;
    return 0;
}