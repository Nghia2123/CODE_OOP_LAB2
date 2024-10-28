#include "TamGiac.h"
#include <iostream>
using namespace std;

//Nhap toa do 3 dinh cua tam giac
void TamGiac::Nhap() {
	do {
		cout << "Nhap toa do 3 dinh cua tam giac:\n";
		cout << "+ Nhap toa do dinh A (x y): ";
		A.Nhap();
		cout << "+ Nhap toa do dinh B (x y): ";
		B.Nhap();
		cout << "+ Nhap toa do dinh C (x y): ";
		C.Nhap();

		//Kiem tra xem 3 dinh co tao thanh tam giac khong
		//Su dung cong thuc dien tich tam giac
		float dt = 0.5 * abs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
		
		if (dt == 0) 
			cout << "3 dinh da nhap khong tao thanh tam giac. Vui long nhap lai\n\n";
		else
			break;
	} while (true);
}

//Xuat toa do 3 dinh cua tam giac
void TamGiac::Xuat() {
	cout << "Dinh A: ";
	A.Xuat();
	cout << "Dinh B: ";
	B.Xuat();
	cout << "Dinh C: ";
	C.Xuat();
	cout << '\n';
}

//Tinh tien tam giac theo gia tri cua vector(dx, dy)
void TamGiac::TinhTien(float dx, float dy) {
	//Tinh tien tung dinh cua tam giac
	A.x += dx; A.y += dy;
	B.x += dx; B.y += dy;
	C.x += dx; C.y += dy;
}

//Phong to tam giac theo gia tri cua bien k
void TamGiac::PhongTo() {
	//Khai bao bien k la ti le phong to
	float k;
	cout << "Nhap ti le phong to: ";
	cin >> k;

	//Phong to tung dinh cua tam giac 
	A.x *= k; A.y *= k;
	B.x *= k; B.y *= k;
	C.x *= k; C.y *= k;
}

//Thu nho tam giac theo gia tri cua bien k
void TamGiac::ThuNho() {
	//Khai bao bien k la ti le thu nho
	float k;
	cout << "Nhap ti le thu nho: ";
	cin >> k;

	//Thu nho tung dinh cua tam giac
	A.x /= k; A.y /= k;
	B.x /= k; B.y /= k;
	C.x /= k; C.y /= k;
}

//Quay tam giac theo goc cua gia tri cua bien goc
void TamGiac::Quay() {
	//Khai bao bien k la goc quay
	float goc;
	cout << "Nhap goc quay (do): ";
	cin >> goc;

	//Chuyen goc tu do sang radian
	float rad = goc * 3.14159265358979323846 / 180;

	//Lay toa do tung dinh cua tam giac
	float xA = A.x, yA = A.y;
	float xB = B.x, yB = B.y;
	float xC = C.x, yC = C.y;


	//Su dung cong thuc quay diem trong mat phang Oxy
	//Xoay dinh A
	A.x = xA * cos(rad) - yA * sin(rad);
	A.y = xA * sin(rad) + yA * cos(rad);

	//Xoay dinh B
	B.x = xB * cos(rad) - yB * sin(rad);
	B.y = xB * sin(rad) + yB * cos(rad);

	//Xoay dinh C
	C.x = xC * cos(rad) - yC * sin(rad);
	C.y = xC * sin(rad) + yC * cos(rad);
}