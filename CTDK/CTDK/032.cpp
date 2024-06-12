#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap n= ";
    cin >> n;
    double s = 0.0;
    int i = 1;

    // S? d?ng vòng l?p while ?? tính t?ng dãy
    while (i <= n) {
        s = s + 1.0 / (i * (i + 1)); // Th?c hi?n phép chia ?úng th? t?
        i++;
    }
    cout << "tong S = " << s << endl;

    return 0;
}
