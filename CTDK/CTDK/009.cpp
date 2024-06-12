#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    int r;
    cout << "nhap ban kinh r: ";
    cin >> r;
    int n;
    cout << "nhap so canh n: ";
    cin >> n;
    float s = 0.5 * n * r * r * sin(2 * 3.14 / n); // Corrected formula
    cout << "dien tich la: " << s << endl;
    return 0;
}
