#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    float xx = (x * 3.14) / 180;
    float s = 1;
    float t = 1;
    int m = 1;
    int dau = -1;
    float e = 1;
    int i = 2;

    while (e >= pow(10, -6))
    {
        t = t * xx * xx;
        m = m * i * (i - 1);
        e = t / m;
        s = s + dau * e;
        dau = -dau;
        i = i + 2;
    }
    cout << "Cos(x) co gia tri la: " << s << endl;
    return 0;
}