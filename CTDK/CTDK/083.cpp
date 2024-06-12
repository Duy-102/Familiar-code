#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "nhap x: ";
    cin >> x;

    int n;
    cout << "nhap n: ";
    cin >> n;

    float s = 0;
    int i = 1;
    while (i <= n)
    {
        s += sin(i * x);
        i++;
    }

    cout << "Tong day la: " << s << endl;
    return 0;
}
