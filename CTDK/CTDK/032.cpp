#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap n= ";
    cin >> n;
    double s = 0.0;
    int i = 1;

    // S? d?ng v�ng l?p while ?? t�nh t?ng d�y
    while (i <= n) {
        s = s + 1.0 / (i * (i + 1)); // Th?c hi?n ph�p chia ?�ng th? t?
        i++;
    }
    cout << "tong S = " << s << endl;

    return 0;
}
