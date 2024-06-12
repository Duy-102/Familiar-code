#include <iostream>
using namespace std;

int main()
{
    float xA;
    cout << "Nhap xA: ";
    cin >> xA;

    float yA;
    cout << "Nhap yA: ";
    cin >> yA;

    float xB;
    cout << "Nhap xB: ";
    cin >> xB;

    float yB;
    cout << "Nhap yB: ";
    cin >> yB;

    float xC;
    cout << "Nhap xC: ";
    cin >> xC;

    float yC;
    cout << "Nhap yC: ";
    cin >> yC;

    float a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
    float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
    float c = sqrt((xB - xC) * (xB - xC) + (yB - yC) * (yB - yC));

    if (a + b > c && a + c > b && b + c > a)
        cout << "La tam giac" << endl;
    else
        cout << "Ko la tam giac" << endl;
    return 0;
}