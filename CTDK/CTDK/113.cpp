#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int at = 2;
    int i = 2;
    int ahh = at;

    while (i <= n)
    {
        ahh = at + 2 * i + 1;
        i++;
        at = ahh;
    }
    cout << "So hang thu " << n << " cua day so la: " << ahh << endl;
    return 0;
}