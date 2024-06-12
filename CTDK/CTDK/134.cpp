#include<iostream>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    float y;
    cout << "Nhap y: ";
    cin >> y;

    float z;
    cout << "Nhap z: ";
    cin >> z;
    if (x <= y && y <= z)
        cout << "bat dang thuc dung";
    else
        cout << "bat dang thuc sai";
	return 0;
}