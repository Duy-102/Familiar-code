#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;// chon so hang don vi de xet
		if (dv % 2 != 0)// kiem tra le bang cac lay so moi chon la dv chia het cho 2 khong
			flag = 1;   //neu khong chia het thi bat co len

		t = t / 10;     //chia lay nguyen muc dich bo di so moi xet buoc truoc.
	}
	if (flag == 1)
		cout << " co so le";
	else
		cout << " khong co so le";
	return 0;
}