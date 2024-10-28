#include "DaGiac.h"
#include "Diem.h"
#include <iostream>
#include <cmath>
using namespace std;

// Ham kiem tra da giac
bool DaGiac::KtraDG(Diem* Dinh, int n) {
	for (int i = 0; i < n - 2; i++) {
		float dt1 = Dinh[i].fHoanh * (Dinh[i + 1].fTung - Dinh[i + 2].fTung);
		float dt2 = Dinh[i + 1].fHoanh * (Dinh[i + 2].fTung - Dinh[i].fTung);
		float dt3 = Dinh[i + 2].fHoanh * (Dinh[i].fTung - Dinh[i + 1].fTung);
		float dt = 0.5 * abs(dt1 + dt2 + dt3);
		if (dt == 0) {
			cout << n << " diem da nhap khong tao thanh 1 da giac. Vui long nhap lai.\n\n";
			return false;
		}
	}
	return true;
}

// Ham nhap da giac
void DaGiac::Nhap() {
	do {
		// Nhap so dinh cua da giac
		cout << "Nhap so dinh cua da giac: ";
		cin >> n;

		// Kiem tra dieu kien nhap
		if (n < 3) {
			cout << "Da giac phai co it nhat 3 dinh. Vui long nhap lai.\n\n";
			continue;
		}

		// Cap phat bo nho cho mang cac dinh cua da giac
		Dinh = new Diem[n];

		// Nhap cac dinh cua da giac
		for (int i = 0; i < n; i++) {
			cout << "Nhap dinh thu " << i + 1 << endl;
			Dinh[i].Nhap();
		}

		// Kiem tra xem da giac co ton tai hay khong
		if (KtraDG(Dinh, n)) {
			break;
		}
		else 
			delete[] Dinh;

	} while (true);
}

// Ham xuat da giac
void DaGiac::Xuat() {
	for (int i = 0; i < n; i++) {
		cout << "Dinh thu " << i + 1 << endl;
		Dinh[i].Xuat();
	}
}

// Ham tinh tien da giac
void DaGiac::TinhTien() {
	int dx, dy;
	cout << "Nhap vecto tinh tien (dx, dy): ";
	cin >> dx >> dy;

	// Tinh tien cac dinh cua da giac
	for (int i = 0; i < n; i++) {
		Dinh[i].fHoanh += dx;
		Dinh[i].fTung += dy;
	}
}

// Ham phong to da giac
void DaGiac::PhongTo() {
	float k;
	cout << "Nhap he so phong to: ";
	cin >> k;

	// Phong to cac dinh cua da giac
	for (int i = 0; i < n; i++) {
		Dinh[i].fHoanh *= k;
		Dinh[i].fTung *= k;
	}
}

// Ham thu nho da giac
void DaGiac::ThuNho() {
	float k;
	cout << "Nhap he so thu nho: ";
	cin >> k;

	// Thu nho cac dinh cua da giac
	for (int i = 0; i < n; i++) {
		Dinh[i].fHoanh /= k;
		Dinh[i].fTung /= k;
	}
}

// Ham quay da giac
void DaGiac::Quay() {
	float alpha;

	// Nhap goc quay theo do
	cout << "Quay da giac theo tam O(0,0)\n";
	cout << "Nhap goc quay (do): ";
	cin >> alpha;

	// Chuyen goc sang radian
	alpha = alpha * 3.14159265358979323846 / 180;

	// Quay cac dinh cua da giac theo tam O(0, 0)
	for (int i = 0; i < n; i++) {
		float x = Dinh[i].fHoanh;
		float y = Dinh[i].fTung;
		
		Dinh[i].fHoanh = x * cos(alpha) - y * sin(alpha);
		Dinh[i].fTung = x * sin(alpha) + y * cos(alpha);
	}
}