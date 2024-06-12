#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap n= ";
    cin >> n;

    double s = 0.0;
    int i = 1;

    while (i <= 2*n+1)
    {
        s = s + i / ((i + static_cast<double>(1)));
        i = i + 2;

    }

    cout << "tong S = " << s << endl;

    return 0;
}
