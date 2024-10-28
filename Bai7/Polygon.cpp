#include "Polygon.h"
#include "Dinh.h"
#include <iostream>
using namespace std;

// Nhap cac diem cua da giac
void Polygon::Nhap() {
	cin >> n; // Nhap so diem cua da giac

	// Neu so diem cua da giac nho hon hoac bang 2 thi thoat chuong trinh
	if (n <= 2) exit(0);

	Diem = new Dinh[n]; // Cap phat bo nho cho mang dong Diem

	// Nhap tung diem cua da giac
	for (int i = 0; i < n; i++) {
		Diem[i].Nhap();
	}
}

// Tinh dien tich cua da giac
void Polygon::DienTich() {
	float s = 0; // s la dien tich cua da giac

	// Dung cong thuc tinh dien tich cua da giac
	for (int i = 0; i < n - 1; i++) {
		s += Diem[i].x * Diem[i + 1].y - Diem[i + 1].x * Diem[i].y;
	}

	// Cong them dien tich cuoi cung
	s += Diem[n - 1].x * Diem[0].y - Diem[0].x * Diem[n - 1].y;
	s = abs(s) / 2; // Lay tri tuyet doi cua s

	cout << s << '\n'; // In dien tich cua da giac
}