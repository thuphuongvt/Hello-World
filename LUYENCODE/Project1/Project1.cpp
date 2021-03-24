/*#include <iostream>
using namespace std;

struct PhanSo
{
	int iTuSo;
	int iMauSo;
};

void Nhap(PhanSo &ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.iTuSo;

	cout << "Nhap mau so: ";
	cin >> ps.iMauSo;
}

void Xuat(PhanSo ps)
{
	cout << ps.iTuSo << "/" << ps.iMauSo;
}

int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}

void RutGon(PhanSo& ps)
{
	int c;
	c = UCLN(ps.iTuSo, ps.iMauSo);
	ps.iTuSo = ps.iTuSo / c;
	ps.iMauSo = ps.iMauSo / c;
}

PhanSo Tong(PhanSo ps1, PhanSo ps2)
{
	PhanSo Tong;
	Tong.iTuSo = ps1.iTuSo * ps2.iMauSo + ps2.iTuSo * ps1.iMauSo;
	Tong.iMauSo = ps1.iMauSo * ps2.iMauSo;
	RutGon(Tong);
	return Tong;
}

PhanSo Hieu(PhanSo ps1, PhanSo ps2)
{
	PhanSo Hieu;
	Hieu.iTuSo = ps1.iTuSo * ps2.iMauSo - ps2.iTuSo * ps1.iMauSo;
	Hieu.iMauSo = ps1.iMauSo * ps2.iMauSo;
	RutGon(Hieu);
	return Hieu;
}

PhanSo Tich(PhanSo ps1, PhanSo ps2)
{
	PhanSo Tich;
	Tich.iTuSo = ps1.iTuSo * ps2.iTuSo;
	Tich.iMauSo = ps1.iMauSo * ps2.iMauSo;
	RutGon(Tich);
	return Tich;
}

PhanSo Thuong(PhanSo ps1, PhanSo ps2)
{
	PhanSo Thuong;
	Thuong.iTuSo = ps1.iTuSo * ps2.iMauSo;
	Thuong.iMauSo = ps1.iMauSo * ps2.iTuSo;
	RutGon(Thuong);
	return Thuong;
}

int SoSanh(PhanSo ps1, PhanSo ps2)
{
	int iTu1 = ps1.iTuSo * ps2.iMauSo;
	int iTu2 = ps2.iTuSo * ps1.iMauSo;
	if (iTu1 > iTu2)
		return 1;
	else
		return 0;
}
int main()
{
	PhanSo ps1,ps2;
	Nhap(ps1);
	Nhap(ps2);
	PhanSo KQ1 = Tong(ps1, ps2);
	PhanSo KQ2 = Hieu(ps1, ps2);
	PhanSo KQ3 = Tich(ps1, ps2);
	PhanSo KQ4 = Thuong(ps1, ps2);

	if (KQ1.iMauSo == 1 && KQ2.iMauSo == 1 && KQ3.iMauSo == 1 && KQ4.iMauSo == 1)
	{
		cout << KQ1.iTuSo << endl;
		cout << KQ2.iTuSo << endl;
		cout << KQ3.iTuSo << endl;
		cout << KQ4.iTuSo << endl;
	}

	else
	{
		cout << "Tong la: " << KQ1.iTuSo << "/" << KQ1.iMauSo << endl;
		cout << "Hieu la: " << KQ2.iTuSo << "/" << KQ2.iMauSo << endl;
		cout << "Tich la: " << KQ3.iTuSo << "/" << KQ3.iMauSo << endl;
		cout << "Thuong la: " << KQ4.iTuSo << "/" << KQ4.iMauSo << endl;
	}

	int KetQua = SoSanh(ps1,ps2);
	switch (KetQua)
	{
		case 1:
		{
			
			RutGon(ps1);
			cout << "Phan so lon nhat la: ";
			Xuat(ps1);
			break;
		}
		default:
		{
		cout << "Phan so lon nhat la: ";
			RutGon(ps2);
			Xuat(ps2);
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
struct NgayThangNam 
{
	int Ngay, Thang, Nam;
};

void Nhap(NgayThangNam &dd, NgayThangNam &mm, NgayThangNam &yy)
{
	cout << "Nhap ngay:\n ";
	cin >> dd.Ngay;

	cout << "Nhap thang:\n";
	cin >> mm.Thang;

	cout << "Nhap nam:\n";
	cin >> yy.Nam;
}

int main()
{
	NgayThangNam dd, mm, yy;
	Nhap(dd, mm, yy);
	int NgayCuoiCung; // Ngày cuối cùng của tháng.
	switch (mm.Thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		NgayCuoiCung = 31;
		break;
	case 4: case 6: case 9: case 11:
		NgayCuoiCung = 30;
		break;
	default:
		if (yy.Nam % 400 == 0 || (yy.Nam % 4 == 0))
			NgayCuoiCung = 29;
		else
			NgayCuoiCung= 28;
		break;
	}
	if 
	
	if (dd.Ngay >= NgayCuoiCung)
	{
		if (mm.Thang == 12)
		{
			dd.Ngay = 1;
			mm.Thang = 1;
			yy.Nam += 1;
			cout << dd.Ngay << ":" << dd.Thang << ":" << dd.Nam;
		}
		else
		{
			dd.Ngay = 1;
			mm.Thang += 1;
			cout << dd.Ngay << ":" << mm.Thang << ":" << yy.Nam;
		}
	}
	else
	{
		dd.Ngay += 1;
		cout << dd.Ngay << ":" << mm.Thang << ":" << yy.Nam;
	}
	return 0;
}*/

#include <iostream>
#include <cstdio>
using namespace std;

struct HoSoHS
{
	char HoTen[50];
	double DiemToan, DiemVan;
};
void NhapHoTen(HoSoHS Ten, HoSoHS Toan, HoSoHS Van)
{
	cout << "Nhap ho va ten: ";
	cin.getline(Ten.HoTen, 50);
	cout << "Nhap "
	cin>> Toan.DiemToan
}