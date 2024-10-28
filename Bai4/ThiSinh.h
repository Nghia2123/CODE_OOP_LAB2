#pragma once
#include <string>
class ThiSinh {
private:
	int iNgay, iThang, iNam;
	float fToan, fVan, fAnh;
public:
	std::string Ten, MSSV;
	void Nhap(); // Nhap thong tin thi sinh
	void Xuat(); // Xuat thong tin thi sinh
	float Tong(); // Tinh tong diem cua thi sinh
}; 

