#include "DaGiac.h"
#include <iostream>
using namespace std;

int main() {
	DaGiac dg;
	dg.Nhap();
	dg.Xuat();

	dg.TinhTien();
	cout << "Da giac sau khi tinh tien\n";
	dg.Xuat();

	dg.PhongTo();
	cout << "Da giac sau khi phong to\n";
	dg.Xuat();

	dg.ThuNho();
	cout << "Da giac sau khi thu nho\n";
	dg.Xuat();

	dg.Quay();
	cout << "Da giac sau khi quay\n";
	dg.Xuat();

	return 0;
}