#include "TamGiac.h"
#include <iostream>
using namespace std;

int main() {
	TamGiac tg; //Khai bao doi tuong tam giac
	float dx, dy; //Bien dx, dy la vector tinh tien

	tg.Nhap(); //Nhap toa do 3 dinh cua tam giac
	tg.Xuat(); //Xuat toa do 3 dinh cua tam giac

	// Tinh tien tam giac theo vector(dx, dy)
	cout << "Nhap vector tinh tien (dx, dy): ";
	cin >> dx >> dy;
	tg.TinhTien(dx, dy);

	// Xuat toa do tam giac sau khi tinh tien
	cout << "Toa do tam giac sau khi tinh tien:\n";
	tg.Xuat();

	// Phong to tam giac theo ti le k
	tg.PhongTo();

	// Xuat toa do tam giac sau khi phong to
	cout << "Toa do tam giac sau khi phong to:\n";
	tg.Xuat();

	// Thu nho tam giac theo ti le k
	tg.ThuNho();

	// Xuat toa do tam giac sau khi thu nho
	cout << "Toa do tam giac sau khi thu nho:\n";
	tg.Xuat();

	// Quay tam giac theo tam O(0, 0)
	cout << "Quay tam giac theo tam O(0, 0)\n";
	tg.Quay();

	// Xuat toa do tam giac sau khi quay
	cout << "Toa do tam giac sau khi quay:\n";
	tg.Xuat();

	return 0;
}