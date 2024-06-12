#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Ko TL";
        return 0;
    }

    bool flag = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            flag = 1;
        t = t / 10;
    }
    if (flag == 1)
        cout << "khong toan so le" << endl;
    else
        cout <<  "toan la le" << endl;
    return 0;
}