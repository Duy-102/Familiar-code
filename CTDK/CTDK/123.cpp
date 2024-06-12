#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int at = 2;
    int bt = 1;
    int i = 2;
    int ahh = at;
    int bhh = bt;

    while (i <= n)
    {
        ahh = 3 * bt + 2 * at;
        bhh = at + 3 * bt;
        i++;
        at = ahh;
        bt = bhh;
    }
    cout << "So hang a thu " << n << " cua day so la: " << ahh << endl;
    cout << "So hang b thu " << n << " cua day so la: " << bhh << endl;
    return 0;
}