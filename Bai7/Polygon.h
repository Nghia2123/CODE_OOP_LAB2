#pragma once
#include "Dinh.h"
class Polygon {
private:
	int n; // n la so diem cua da giac
	Dinh* Diem; // Diem la 1 mang dong chua cac diem cua da giac
public:
	void Nhap(); // Nhap cac diem cua da giac
	void DienTich(); // Tinh dien tich cua da giac va in dien tich
};

