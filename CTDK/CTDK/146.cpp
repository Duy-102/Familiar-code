#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int dn = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        dn = dn * 10 + dv;
        t =t/ 10;
    }
    if (dn == n)
        cout << "La so doi xung";
    else
        cout << "Ko phai so doi xung";
    return 0;
}