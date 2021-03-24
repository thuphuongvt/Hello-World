#include <iostream>
using namespace std;

struct NgayKeTiep
{
	int Ngay, Thang, Nam;
};

void Nhap(NgayKeTiep dd, NgayKeTiep mm, NgayKeTiep yy)
{
	cout << "Nhap ngay: \n ";
	cin >> dd.Ngay;

	cout << "Nhap thang: \n";
	cin >> mm.Thang;

	cout << "Nhap nam: \n";
	cin >> yy.Nam;
}

void KiemTra(NgayKeTiep dd, NgayKeTiep mm, NgayKeTiep yy)
{
	int NgayCuoiCung;
	switch (dd.Ngay)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		NgayCuoiCung = 31;
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		NgayCuoiCung = 30;
		break;
	}
	case 2:
	{
		if (yy.Nam % 400 == 0 || (yy.Nam % 4 == 0))
			NgayCuoiCung = 29;
		else NgayCuoiCung = 28;
		break;
	}
	default:
	{

	}
	}
	
}
