#include <iostream>
#include <iomanip>
using namespace std;
class ncc
{
private:
    char maNCC[20];
    char tenNCC[20];
    char diaChi[20];
    char sdt[20];

public:
    void nhap();
    void xuat();
};
class sp
{
private:
    char maSP[20];
    char tenSP[20];
    int soLuong;
    float donGia;

public:
    void nhap();
    void xuat();
};
class phieu
{
private:
    char maPH[10];
    char date[20];
    sp sanPham[100];
    int soSP;
    ncc Ncc;

public:
    void nhap();
    void xuat();
};

void ncc::nhap()
{
    cout << "Nhap ma nha cung cap: ";
    fflush(stdin);
    gets(maNCC);
    cout << "Nhap ten nha cung cap: ";
    fflush(stdin);
    gets(tenNCC);
    cout << "Nhap dia chi: ";
    fflush(stdin);
    gets(diaChi);
    cout << "Nhap so dien thoai: ";
    fflush(stdin);
    gets(sdt);
};
void ncc::xuat()
{
    cout << "Ma NCC: " << setw(15) << maNCC;
    cout << setw(20) << "Ten NCC: " << setw(20) << tenNCC << endl;
    cout << "Dia chi: " << setw(20) << diaChi;
    cout << setw(10) << "SDT: " << setw(10) << sdt << endl;
};
void sp::nhap()
{
    cout << "Nhap ma sp: ";
    fflush(stdin);
    gets(maSP);
    cout << "Nhap ten san pham: ";
    fflush(stdin);
    gets(tenSP);
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
};
void sp::xuat()
{
    cout << setw(7) << maSP;
    cout << setw(15) << tenSP;
    cout << setw(10) << soLuong;
    cout << setw(10) << donGia << endl;
};
void phieu::nhap()
{
    cout << "nhap ma: ";
    fflush(stdin);
    gets(maPH);
    cout << "nhap ngay thang nam: ";
    fflush(stdin);
    gets(date);
    Ncc.nhap();
    cout << "Nhap so sp: ";
    cin >> soSP;
    for (int i = 0; i < soSP; i++)
    {
        sanPham[i].nhap();
    }
};
void phieu::xuat()
{
    cout << "Dai hoc Victoria" << endl;
    cout << "PHIEU NHAP VAN PHONG PHAM" << endl;
    cout << "Ma phieu: " << setw(10) << maPH;
    cout << setw(25) << "Ngay lap: " << setw(15) << date << endl;
    Ncc.xuat();
    cout << setw(7) << "ma SP";
    cout << setw(15) << "ten SP";
    cout << setw(10) << "soL";
    cout << setw(10) << "don gia" << endl;
    for (int i = 0; i < soSP; i++)
    {
        sanPham[i].xuat();
    }
};
int main()
{
    phieu p;
    cout << "NHAP THONG TIN" << endl;
    p.nhap();
    p.xuat();
    return 0;
}