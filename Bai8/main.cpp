#include "List.h"
#include <iostream>
using namespace std;

int main() {
	List a;
	int n;
	while (true) {
		cin >> n;
		// -1: Xuat List va ket thuc chuong trinh
		if (n == -1) {
			a.Xuat();
			return 0;
		}
		// 0: Them phan tu vao List
		else if (n == 0) {
			double x;
			cin >> x;
			a.Them(x);
		}
		// 1: Xoa phan tu dau tien co gia tri x khoi List
		else if (n == 1) {
			double x;
			cin >> x;
			a.Xoa(x);
		}
		// 2: Xoa tat ca cac phan tu co gia tri x khoi List
		else if (n == 2) {
			double x;
			cin >> x;
			a.XoaTBo(x);
		}
		// 3: Thay doi phan tu thu x bang y
		else if (n == 3) {
			unsigned int x;
			double y;
			cin >> x >> y;
			a.ThayDoi(x, y);
		}
	}
}