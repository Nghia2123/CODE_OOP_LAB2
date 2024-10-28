#include "Dinh.h"
#include <iostream>
using namespace std;

//Nhap toa do dinh
void Dinh::Nhap() {
	cin >> x >> y;
}

//Xuat toa do dinh
void Dinh::Xuat() {
	cout << "(" << x << ", " << y << ")\n";
}