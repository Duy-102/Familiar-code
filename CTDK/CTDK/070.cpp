#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    int n;
    cout << "Nhap n: ";
    cin >> n;

    float s = 0;
    float t = 1;
    int i = 2;
    while (i <= 2 * n )
    {
        t = t * x * x;
        s = s + t;
        i += 2;
    }
    cout << "Tong la: " << s << endl;
    return 0;
} 