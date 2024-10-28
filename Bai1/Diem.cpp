#include "Diem.h"
#include <iostream>
using namespace std;

// Khoi tao hoanh do va tung do
Diem::Diem() {
	iHoanh = 0;
	iTung = 0;
}

// Khoi tao hoanh do va tung do
Diem::Diem(int Hoanh, int Tung) {
	iHoanh = Hoanh;
	iTung = Tung;
}

// Khoi tao sao chep
Diem::Diem(const Diem& x) {
	iHoanh = x.iHoanh;
	iTung = x.iTung;
}

// Nhap hoanh do va tung do
void Diem::Nhap() {
	cout << "Nhap hoanh do: ";
	cin >> iHoanh;
	cout << "Nhap tung do: ";
	cin >> iTung;
}

// Xuat hoanh do va tung do
void Diem::Xuat() {
	cout << "Hoanh do: " << iHoanh << endl;
	cout << "Tung do: " << iTung << endl;
	cout << endl;
}

// Lay gia tri tung do
int Diem::GetTungDo() {
	return iTung;
}

// Lay gia tri hoanh do
int Diem::GetHoanhDo() {
	return iHoanh;
}

// Gan gia tri tung do
void Diem::SetTungDo() {
	cout << "Nhap tung do moi: ";
	cin >> iTung;
}

// Gan gia tri hoanh do
void Diem::SetHoanhDo() {
	cout << "Nhap hoanh do moi: ";
	cin >> iHoanh;
}

// Tinh tien theo vector (x, y)
void Diem::TinhTien() {
	int x, y;

	// Nhap vector (x, y)
	cout << "Tinh tien theo vector (x, y)" << endl;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;

	// Tinh tien
	cout << '\n';
	iHoanh += x;
	iTung += y;
}