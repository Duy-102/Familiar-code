#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    float at = 2;
    int i = 2;
    float ahh = at;

    while (i <= n)
    {
        ahh = 5 * at + sqrt(24 * at * at - 8);
        i++;
        at = ahh;
    }
    cout << "So hang thu " << n << " cua day so la: " << ahh << endl;
    return 0;
}