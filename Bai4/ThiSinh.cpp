#include "ThiSinh.h"
#include <iostream>
#include <string>
using namespace std;

// Nhap thong tin thi sinh
void ThiSinh::Nhap() {
	cin.ignore();

	// Nhap thong tin thi sinh
    cout << "+ Nhap ten: "; getline(cin, Ten);
    cout << "+ Nhap MSSV: "; getline(cin, MSSV);
    cout << "+ Nhap ngay sinh (ngay thang nam): "; cin >> iNgay >> iThang >> iNam;

	// Nhap diem Toan va kiem tra hop le
	do {
		cout << "+ Nhap diem Toan: "; cin >> fToan;
		if (fToan < 0 || fToan > 10) {
			cout << "Diem Toan khong hop le. Vui long nhap lai.\n";
		}
	} while (fToan < 0 || fToan > 10);

	// Nhap diem Van va kiem tra hop le
	do {
		cout << "+ Nhap diem Van: "; cin >> fVan;
		if (fVan < 0 || fVan > 10) {
			cout << "Diem Van khong hop le. Vui long nhap lai.\n";
		}
	} while (fVan < 0 || fVan > 10);
	
	// Nhap diem Anh va kiem tra hop le
	do {
		cout << "+ Nhap diem Anh: "; cin >> fAnh;
		if (fAnh < 0 || fAnh > 10) 
			cout << "Diem Anh khong hop le. Vui long nhap lai.\n";
	} while (fAnh < 0 || fAnh > 10);

	cout << '\n';

}

// Xuat thong tin thi sinh
void ThiSinh::Xuat() {
	cout << "+ Ten: " << Ten << endl;
	cout << "+ MSSV: " << MSSV << endl;
	cout << "+ Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
	cout << "+ Diem Toan: " << fToan << endl;
	cout << "+ Diem Van: " << fVan << endl;
	cout << "+ Diem Anh: " << fAnh << endl;
}

// Tinh tong diem cua thi sinh
float ThiSinh::Tong() {
	return fToan + fVan + fAnh;
}
