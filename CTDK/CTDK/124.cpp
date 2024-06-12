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
        ahh = at * at + 2 * bt * bt;
        bhh = 2 * at * bt;
        i++;
        at = ahh;
        bt = bhh;
    }
    cout << "So hang a thu " << n << " cua day so la: " << ahh << endl;
    cout << "So hang b thu " << n << " cua day so la: " << bhh << endl;
    return 0;
}