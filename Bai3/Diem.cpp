#include "Diem.h"
#include <iostream>
using namespace std;

// Ham nhap toa do diem
void Diem::Nhap() {
	cout << "Nhap toa do diem (x y): ";
	cin >> fHoanh >> fTung;
	cout << '\n';
}

// Ham xuat toa do diem
void Diem::Xuat() {
	cout << "Toa do (x, y): ";
	cout << "(" << fHoanh << ", " << fTung << ")\n\n";
}