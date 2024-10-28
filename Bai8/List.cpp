#include "List.h"
#include <iostream>
using namespace std;

// Khoi tao List rong
List::List() {
	data = NULL;
	size = 0;
}

// Huy List
List::~List() {
	delete[] data;
}

// Xuat List theo format:[a1,a2,a3,...]
void List::Xuat() {
	cout << "[";

	if (size != 0) {
		for (unsigned int i = 0; i < size - 1; i++) {
			cout << data[i] << ",";
		}

		if (size > 0) {
			cout << data[size - 1];
		}
	}

	cout << "]";
	cout << '\n';
}

// Them phan tu vao List
void List::Them(double x) {
	// Khoi tao mang moi co kich thuoc tang len 1 don vi
	double* temp = new double[size + 1];

	// Copy du lieu tu mang cu sang mang moi
	for (unsigned int i = 0; i < size; i++) {
		temp[i] = data[i];
	}

	// Them phan tu moi vao cuoi mang
	temp[size] = x;

	// Xoa mang cu
	delete[] data;

	// Gan con tro data tro den mang moi
	data = temp;

	// Tang kich thuoc cua List len 1 don vi
	size++;
}

// Xoa phan tu dau tien co gia tri x khoi List
void List::Xoa(double x) {
	// Tim vi tri cua phan tu co gia tri x
	unsigned int i = 0;
	while (i < size && data[i] != x) {
		i++;
	}

	// Neu tim thay phan tu co gia tri x
	if (i < size) {
		// Khoi tao mang moi co kich thuoc giam di 1 don vi
		double* temp = new double[size - 1];

		// Copy du lieu tu mang cu sang mang moi tru phan tu co gia tri x
		for (unsigned int j = 0; j < i; j++) {
			temp[j] = data[j];
		}

		for (unsigned int j = i + 1; j < size; j++) {
			temp[j - 1] = data[j];
		}

		// Xoa mang cu
		delete[] data;

		// Gan con tro data tro den mang moi
		data = temp;

		// Giam kich thuoc cua List di 1 don vi
		size--;
	}
}

// Xoa tat ca cac phan tu co gia tri x khoi List
void List::XoaTBo(double x) {
	// Khoi tao mang moi co kich thuoc bang 0
	double* temp = new double[0];
	unsigned int newSize = 0;

	// Duyet qua tat ca cac phan tu cua List
	for (unsigned int i = 0; i < size; i++) {
		// Neu phan tu hien tai khong co gia tri x
		if (data[i] != x) {
			/* Khoi tao mang temp2 moi co kich thuoc
			tu mang temp tang len 1 don vi*/
			double* temp2 = new double[newSize + 1];

			// Copy du lieu tu mang temp sang mang moi
			for (unsigned int j = 0; j < newSize; j++) {
				temp2[j] = temp[j];
			}

			// Them phan tu hien tai vao cuoi mang
			temp2[newSize] = data[i];

			// Xoa mang cu
			delete[] temp;

			// Gan con tro temp tro den mang moi
			temp = temp2;

			// Tang kich thuoc cua List moi len 1 don vi
			newSize++;
		}
	}

	// Xoa mang cu
	delete[] data;

	// Gan con tro data tro den mang moi
	data = temp;

	// Gan kich thuoc cua List bang kich thuoc cua mang moi
	size = newSize;
}

// Thay doi phan tu thu x bang y
void List::ThayDoi(unsigned int x, double y) {
	// Neu x nam trong khoang [0, size-1]
	if (x < size && x >= 0) {
		data[x] = y;
	}
}
