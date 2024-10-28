#include "TamGiac.h"
#include <iostream>
using namespace std;

#define PI 3.14

// Nhap toa do 3 dinh cua tam giac
void TamGiac::Nhap() {
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}

// Tinh tien tam giac
void TamGiac::TinhTien() {
	float h; // Huong tinh tien (do)
	float d; // Do dai tinh tien

	cin >> h >> d; // Nhap huong va do dai tinh tien
	
	float rh = h * PI / 180; // Chuyen huong tu do sang radian
	
	float dx = d * cos(rh); // Tinh do dai tinh tien theo phuong x
	float dy = d * sin(rh); // Tinh do dai tinh tien theo phuong y

	x1 += dx; y1 += dy; // Tinh tien dinh 1
	x2 += dx; y2 += dy; // Tinh tien dinh 2
	x3 += dx; y3 += dy; // Tinh tien dinh 3
}

// Xuat 3 dinh cua tam giac
void TamGiac::Xuat() {
	cout << '(' << x1 << "," << y1 << ')' << endl;
	cout << '(' << x2 << "," << y2 << ')' << endl;
	cout << '(' << x3 << "," << y3 << ')' << endl;
}