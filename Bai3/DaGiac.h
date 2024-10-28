#pragma once
#include "Diem.h"
class DaGiac {
private:
	int n; // so dinh cua da giac
	Diem *Dinh; // con tro tro den mang cac dinh cua da giac
public:
	bool KtraDG(Diem* Dinh, int n); // Ham kiem tra da giac
	void Nhap(); // ham nhap da giac
	void Xuat(); // ham xuat da giac
	void TinhTien(); // ham tinh tien da giac
	void PhongTo(); // ham phong to da giac
	void ThuNho(); // ham thu nho da giac
	void Quay(); // ham quay da giac
};

