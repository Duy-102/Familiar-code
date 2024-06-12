#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "nhap nam bat dau: ";
    cin >> x;
    int y;
    cout << "nhap nam ket thuc: ";
    cin >> y;
    int n = x;
    //kiem tra dk nam nhuan
    bool dk1 = ((n % 4 == 0) && (n % 100) != 0);
    bool dk2 = (n % 400 == 0);
    while (n <= y)
    {
        if (dk1 || dk2)
            cout << "nam " << " " << n << " la nam nhuan" << endl;
        n = n + 1;
    }

    return 0;
}