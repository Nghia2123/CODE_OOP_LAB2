#include "ThiSinh.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; // So thi sinh
	cout << "Nhap so thi sinh: ";
	cin >> n;

	// Cap phat bo nho dong cho mang thi sinh
	ThiSinh* ts = new ThiSinh[n];

	// Nhap thong tin cho n thi sinh
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin thi sinh thu " << i+1 << ":\n";
		ts[i].Nhap();
	}
	
	float mx = FLT_MIN; // Diem cao nhat
	int mx_idx = 0; // Vi tri thi sinh co diem cao nhat

	// Xuat thong tin nhung thi sinh co tong diem lon hon 15
	cout << "Thong tin nhung thi sinh co "
			<< "tong diem lon hon 15 la:\n";
	for (int i = 0; i < n; i++) {
		if (ts[i].Tong() > 15) {
			ts[i].Xuat();
			cout << '\n';
		}
		if (mx < ts[i].Tong()) {
			mx = ts[i].Tong();
			mx_idx = i;
		}
	}

	// Tim nhung thi sinh co diem cao nhat
	vector<ThiSinh> ts_vec;
	for (int i = 0; i < n; i++) {
		if (ts[i].Tong() == mx) {
			ts_vec.push_back(ts[i]);
		}
	}

	// Xuat thi sinh co diem cao nhat
	if (ts_vec.size() > 1) {
		cout << "Nhung thi sinh co diem cao nhat co ma so sinh vien ";
		for (int i = 0; i < ts_vec.size(); i++) {
			cout << ts_vec[i].MSSV;
			if (i != ts_vec.size() - 1) {
				cout << ", ";
			}
		}
		cout << " la nhung ban ";
		for (int i = 0; i < ts_vec.size(); i++) {
			cout << ts_vec[i].Ten;
			if (i != ts_vec.size() - 1) {
				cout << ", ";
			}
		}
	}
	else {
		cout << "Thi sinh co diem cao nhat co ma so sinh vien " << ts[mx_idx].MSSV
			<< " la ban " << ts[mx_idx].Ten << '\n';
	}

	return 0;
}