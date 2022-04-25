#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Date{
	private:
		int d, m, y;
	public:
		void nhap();
		void xuat();
};

class NhaSanXuat{
	private:
		char tenNSX[30];
		char diaChi[30];
	public:
		void nhap();
		void xuat();
};

class Hang{
	protected:
		char tenHang[30];
		NhaSanXuat x;
		int donGia;
	public:
		void nhap();
		void xuat();
	Hang();
};

class Tivi:public Hang{
	private:
		int kichThuoc;
		Date ngayNhap;
	public:
		void nhap();
		void xuat();
		Tivi();
};

void Date::nhap() {
	cout<<"Nhap ngay: ";		cin>>d;
	cout<<"Nhap thang: ";		cin>>m;
	cout<<"Nhap nam: ";			cin>>y;
}

void Date::xuat(){
	cout<<"Ngay nhap: "<<d<<"/"<<m<<"/"<<y<<endl;
}

void NhaSanXuat::nhap(){
	cout<<"Nhap ten NSX: ";		fflush(stdin);		gets(tenNSX);
	cout<<"Nhap dia chi NSX: ";		fflush(stdin);		gets(diaChi);
}

void NhaSanXuat::xuat(){
	cout<<"Ten nha san xuat: "<<tenNSX<<endl;
	cout<<"Dia chi nha san xuat: "<<diaChi<<endl;
}

void Hang::nhap(){
	cout<<"Nhap ten hang: "; 		fflush(stdin);		gets(tenHang);
	x.nhap();
	cout<<"Nhap don gia: ";								cin>>donGia;
}

void Hang::xuat(){
	cout<<"Ten hang: "<<tenHang<<endl;
	x.xuat();
	cout<<"Don gia: "<<donGia<<endl;
}

Hang::Hang(){
	strcpy(tenHang, "");
	donGia=0;
}

void Tivi::nhap(){
	Hang::nhap();
	cout<<"Nhap kich thuoc: ";		cin>>kichThuoc;
	ngayNhap.nhap();
}

void Tivi::xuat(){
	Hang::xuat();
	cout<<"Kich thuoc: "<<kichThuoc<<endl;
	ngayNhap.xuat();
}

Tivi::Tivi():Hang(){
	kichThuoc=0;
}

int main() {
	Tivi a;
	a.nhap();
	cout<<"THONG TIN TIVI"<<endl;
	a.xuat();
	return 0;
}
