#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    float at = 3;
    int i = 2;
    float ahh = at;
    while (i <= n)
    {
        ahh = (-9 * at - 24) / (5 * at + 13);
        i++;
        at = ahh;
    }
    cout << "So hang thu " << n << " cua day so la: " << ahh << endl;
    return 0;
}