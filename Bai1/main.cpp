#include "Diem.h"
#include <iostream>
using namespace std;

int main() {
	// Khoi tao doi tuong Diem cho bien A va B
	Diem A; // Diem A(0, 0);
	Diem B(3, 4); // Diem B(3, 4);

	A.Nhap(); // Nhap hoanh do va tung do

	cout << "Diem A vua nhap:\n";
	A.Xuat(); // Xuat hoanh do va tung do

	cout << "Diem B duoc khoi tao voi doi so truyen vao:\n";
	B.Xuat(); // Xuat hoanh do va tung do cua B

	cout << "Sao chep A vao B\n\n";
	B = A; // Sao chep A vao B

	A.TinhTien(); // Tinh tien theo vector (x, y)

	cout << "Diem A sau khi tinh tien:\n";
	A.Xuat(); // Xuat hoanh do va tung do sau khi tinh tien

	cout << "Diem B sau khi sao chep:\n";
	B.Xuat(); // Xuat hoanh do va tung do cua B sau khi sao chep

	// Test cac ham Get va Set
	cout << "Gan gia tri moi cho hoanh do va tung do cua A\n";
	A.SetHoanhDo();
	A.SetTungDo();

	//Lay hoanh do va tung do cho bien ngoai lop
	int x = A.GetHoanhDo();
	int	y = A.GetTungDo();

	// Xuat gia tri hoanh do va tung do lay duoc
	cout << "Gia tri cua tung do va hoanh do lay duoc" 
		   << " tu phuong thuc GetHoanhDo() va GetTungDo() la:\n";
	cout << "+ Tung do: " << x << endl;
	cout << "+ Hoanh do: " << y << endl;

	return 0;
}