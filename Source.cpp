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
//Hieu

int tong(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}

float thuong(int a, int b) {
	return(a / b);
}


int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD

	cout << "Nhap vao so a:";
	cin >> a;
	cout << "Nhap vao so b:";
	cin >> b;
	cout << "Tong 2 so " << a << " va " << b << " la: " << tong(a, b);
	cout << "Hieu 2 so " << a << " va " << b << " la: " << hieu(a, b);
	cout << "Tich 2 so " << a << " va " << b << " la: " << tich(a, b);
	cout << "Thuong 2 so " << a << " va " << b << " la: " << thuong(a, b);


	
=======
	cout << "\nTong la:" << tong;
>>>>>>> 6c78dbf2bfc13abe446c0d1fc11fde4207c91ea4
	system("pause");
	return 0;
}