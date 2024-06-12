#include <iostream>
using namespace std;

int main() {
    float  x;
    cout << "Nhap gia tri cua x: ";
    cin >> x;
    int x2 = x * x;
    int x4 = x2 * x2;
    int x8 = x4 * x4;
    int x16 = x8 * x8;
    int x32 = x16 * x16;
    cout << "x^32 = " << x32 << endl;
    return 0;
}
