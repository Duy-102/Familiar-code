#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    float xx = (x * 3.14) / 180;
    float s = xx;
    float t = xx;
    int m = 1;
    int dau = -1;
    float e = xx;
    int i = 3;
    while (e >= pow(10, -6))
    {
        t = t * xx * xx;
        m = m * i * (i - 1);
        e = t / m;
        s = s + dau * e;
        dau = -dau;
        i += 2;
    }
    cout << "Sin(x) co gia tri la: " << s << endl;
    return 0;
}