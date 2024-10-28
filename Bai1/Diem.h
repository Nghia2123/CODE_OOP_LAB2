
class Diem {
private:
	int iHoanh, iTung;
public:
	Diem(); // Khoi tao hoanh do va tung do
	Diem(int Hoanh, int Tung); // Khoi tao hoanh do va tung do
	Diem(const Diem& x); // Khoi tao sao chep
	void Nhap(); // Nhap hoanh do va tung do
	void Xuat(); // Xuat hoanh do va tung do
	int GetTungDo(); // Lay gia tri tung do
	int GetHoanhDo(); // Lay gia tri hoanh do
	void SetTungDo(); // Gan gia tri tung do
	void SetHoanhDo(); // Gan gia tri hoanh do
	void TinhTien(); // Tinh tien theo vector (x, y)
};
