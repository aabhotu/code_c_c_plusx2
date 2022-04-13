#include <iostream>
#include <iomanip>
using namespace std;
class NhaSanXuat
{
private:
    char MaNSX[10];
    char TenNSX[30];
    char DiaChi[30];

public:
    void nhap();
    void xuat();
    friend class Hang;
};
class Hang
{
private:
    char MaHang[10];
    char TenHang[30];
    int donGia;
    float trongLuong;
    NhaSanXuat nsx;

public:
    void nhap();
    void xuat();
};
void NhaSanXuat::nhap()
{
    cout << "Nhap ma nha san xuat: ";
    fflush(stdin);
    gets(MaNSX);
    cout << "Nhap ten nha san xuat: ";
    fflush(stdin);
    gets(TenNSX);
    cout << "Nhap dia chi: ";
    fflush(stdin);
    gets(DiaChi);
}
void NhaSanXuat::xuat()
{
    cout << "Ma nha san xuat: " << MaNSX << endl;
    cout << "Ten nha san xuat: " << TenNSX << endl;
    cout << "Dia chi: " << DiaChi << endl;
}
void Hang::nhap()
{
    cout << "Nhap ma hang: ";
    fflush(stdin);
    gets(MaHang);
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(TenHang);
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap trong luong: ";
    cin >> trongLuong;
    nsx.nhap();
}
void Hang::xuat()
{
    cout << "Ma hang: " << MaHang << endl;
    cout << "Ten hang: " << TenHang << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Trong luong: " << trongLuong << endl;
    nsx.xuat();
}
int main()
{
    Hang h;
    h.nhap();
    cout << "THONG TIN DON HANG";
    h.xuat();
    return 0;
}