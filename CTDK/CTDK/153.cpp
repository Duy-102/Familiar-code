#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    bool flag = 1;
    int t = n;

    while (t > 1)
    {
        int du = t % 5;
        if (du != 0)
            flag = 0;
        t = t / 5;
    }
    if (flag == 1)
        cout <<"n= " << n << " La dang 5^m " << endl;
    else
        cout <<"n= " << n << " Khong la dang 5^m" << endl;

    return 0;
}