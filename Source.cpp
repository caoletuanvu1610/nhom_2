#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int tich(int a, int b);

int tich(int a, int b)
{
	return a * b;

}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout << "Nhap vao so a:";
	cin >> a;
	cout << "Nhap vao so b:";
	cin >> b;
	cout << "Tong 2 so " << a << " va " << b << " la: " << tong(a, b);
	cout << "Hieu 2 so " << a << " va " << b << " la: " << hieu(a, b);
	cout << "Tich 2 so " << a << " va " << b << " la: " << tich(a, b);
	cout << "Thuong 2 so " << a << " va " << b << " la: " << thuong(a, b);


	
	system("pause");
	return 0;
}