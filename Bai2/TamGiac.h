#pragma once
#include "Dinh.h"
class TamGiac {
private:
	Dinh A, B, C; //3 dinh cua tam giac
public:
	void Nhap(); //Nhap toa do 3 dinh cua tam giac
	void Xuat(); //Xuat toa do 3 dinh cua tam giac

	//Tinh tien tam giac theo gia tri cua vector(dx, dy)
	void TinhTien(float dx, float dy); 
	void PhongTo(); //Phong to tam giac 
	void ThuNho(); //Thu nho tam giac 
	void Quay(); //Quay tam giac theo tam O(0, 0) 
};

