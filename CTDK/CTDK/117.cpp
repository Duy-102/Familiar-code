#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int att = -1;
    int at = 3;
    int t = 2;
    int i = 2;
    int ahh = at;

    while (i <= n)
    {
        t = t * 2;
        ahh = 5 * t + 5 * at - att;
        i++;
        att = at;
        at = ahh;
    }
    cout << "So hang thu " << n << " cua day so la: " << ahh << endl;
    return 0;
}