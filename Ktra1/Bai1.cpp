#include<iostream>
#include<iomanip>
#include <string.h>

using namespace std;

class SanPham;
class DongHo;
class NhaSanXuat{
	private:
		char tenNSX[30];
		char diaChi[30];
	public:
		void nhap();
		void xuat();
    friend void Sua(DongHo &a);
};

class SanPham{
	protected:
		char tenSP[30];
		NhaSanXuat x;
		int giaThanh;
    friend void Sua(DongHo &a);

};
class DongHo : public SanPham{
	private:
		char loaiMay[20];
		float duongKinh;
		char chatLieu[30];
		char matKinh[30];
		char matMau[30];
	public:
		void nhap();
		void xuat();
    friend void Sua(DongHo &a);
};

void NhaSanXuat::nhap(){
    cout<<"Nhap ten nha san xuat: ";		fflush(stdin);		gets(tenNSX);
    cout<<"Nhap dia chi nha san xuat: ";		fflush(stdin);		gets(diaChi);
}
void NhaSanXuat::xuat(){
    cout<<setw(20)<<tenNSX<<setw(20)<<diaChi;
}

void DongHo::nhap(){
    cout<<"Nhap ten dong ho: ";		fflush(stdin);		gets(tenSP);
    x.nhap();
    cout<<"Nhap gia thanh: ";		cin>>giaThanh;
    cout<<"Nhap loai may: ";		fflush(stdin);		gets(loaiMay);
    cout<<"Nhap duong kinh: ";		cin>>duongKinh;
    cout<<"Nhap chat lieu: ";		fflush(stdin);		gets(chatLieu);
    cout<<"Nhap mat kinh: ";		fflush(stdin);		gets(matKinh);
    cout<<"Nhap mat mau: ";		fflush(stdin);		gets(matMau);
}
void DongHo::xuat(){
    cout<<setw(20)<<tenSP;
    x.xuat();
    cout<<setw(20)<<giaThanh<<setw(20)<<loaiMay<<setw(20)<<duongKinh<<setw(20)<<chatLieu<<setw(20)<<matKinh<<setw(20)<<matMau;
}
void Sua(DongHo &a){
	strcpy(a.x.tenNSX, "Rolex");

}

int main(){
    DongHo a;
    a.nhap();
    cout<<setw(20)<<"ten sp"<<setw(20)<<"ten NSX"
    <<setw(20)<<"dia Chi"<<setw(20)<<"gia Thanh"
    <<setw(20)<<"loai May"<<setw(20)<<"duong Kinh"
    <<setw(20)<<"chat Lieu"<<setw(20)<<"matKinh"<<setw(20)<<"mat Mau"<<endl;
    a.xuat();
    cout<<"\nTHONG TIN SAU SUA"<<endl;
    Sua(a);
    a.xuat();
    return 0; 
}