#pragma once
class List {
private:
	double* data; // Con tro quan ly mang List
	unsigned int size; // Kich thuoc cua List

public:
	List(); // Khoi tao List rong
	~List(); // Huy List
	void Xuat(); // Xuat List
	void Them(double x); // Them phan tu vao List
	void Xoa(double x); // Xoa phan phan tu co gia tri x khoi List
	void XoaTBo(double x); // Xoa tat ca cac phan tu co gia tri x khoi List
	void ThayDoi(unsigned int x, double y); // Thay doi phan tu thu x bang y
};

