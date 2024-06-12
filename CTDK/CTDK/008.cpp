#include<iostream>
#include<cmath> // Include cmath for sin function
using namespace std;

int main()
{
    int r;
    cout << "nhap ban kinh r: ";
    cin >> r;
    int n;
    cout << "nhap so canh n: ";
    cin >> n;
    float s = 2*3.14 * r  * sin(3.14 / r); 
    cout << "dien tich la: " << s << endl;

    return 0;
}
