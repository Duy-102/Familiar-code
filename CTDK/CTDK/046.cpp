#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        s += (float)1 / ((i + 1) * (sqrt(i)) + i * (sqrt(i + 1)));
        i++;
    }
    cout << "Tong s la: " << s;
    return 0;
}