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

    if (x + y > z && y + z + x && x + z > y) 
        if (x == y && y == z)
            cout << "la tam giac deu";
        else if (x == y || y == z || x == z)        // kiem tra tam giac can 2 canh bang nhau
        {
            if ((x * x == y * y + z * z) ||
                (y * y == x * x + z * z) ||
                (z * z == y * y + x * x))           // kiem tra tam giac vuong can them dk vuong
                cout << " la tam giac vuong can";
            else
                cout << "la tam giac can";          // khong vuong thi can vi co 2 canh bang nhau
        }
        else if
            ((x * x == y * y + z * z) ||
                (y * y == x * x + z * z) ||
                (z * z == y * y + x * x))
            cout << "la tam giac vuong";
        else
            cout << "la tam giac thuong";
    else
        cout << "khong la tam giac";
    
	return 0;
}