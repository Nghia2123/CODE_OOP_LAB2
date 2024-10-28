#include "Diem.h"
#include <iostream>
using namespace std;

// Nhap toa do diem va so chi thi
void Diem::Nhap() {
	// Nhap toa do diem
	cin >> fHoanh >> fTung;
	
	// Nhap n (so chi thi)
	cin >> n;
}

// Chi thi toa do diem
void Diem::ChiThi() {
	// Duyet qua tung chi thi
	for (int i = 0; i < n; i++) {
		// Nhap chi thi
		int x;
		cin >> x;

		// x == 1: nhan doi toa do
		if (x == 1) {
			fHoanh *= 2;
			fTung *= 2;
		}
		// x == 2: gan diem ve goc toa do
		else if (x == 2) {
			fHoanh = 0;
			fTung = 0;
		}
		else if (x == 3) {
			int k; // k la huong tinh tien
			float d; // d la do tinh tien
			cin >> k >> d; // Nhap k, d

			// k == 0 tinh tien theo truc x
			if (k == 0)
				fHoanh += d;
			// k == 1 tinh tien theo truc y
			else if (k == 1)
				fTung += d;
		}
	}
}

// Xuat toa do diem
void Diem::Xuat() {
	// Xuat toa do diem
	cout << '(' << fHoanh << ',' << fTung << ')' << '\n';
}