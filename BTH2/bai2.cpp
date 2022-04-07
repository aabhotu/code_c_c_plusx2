#include <iostream>
#include <iomanip>
using namespace std;
class NhaSanXuat
{
private:
    char maSX[10];
    char tenNSX[30];
    char diaChiNSX[30];

public:
    void nhap();
    void xuat();
};
class Hang
{
private:
    char maHang[10];
    char tenHang[30];
    NhaSanXuat NSX;

public:
    void nhap();
    void xuat();
};
void NhaSanXuat::nhap()
{
    cout << "Nhap ma NSX: ";
    fflush(stdin);
    gets(maSX);
    cout << "Nhap ten NSX: ";
    fflush(stdin);
    gets(tenNSX);
    cout << "Nhap dia chi NSX: ";
    fflush(stdin);
    gets(diaChiNSX);
};
void NhaSanXuat::xuat()
{
    cout << "Ma NSX: " << maSX << endl;
    cout << "Ten NSX: " << tenNSX << endl;
    cout << "Dia chi NSX: " << diaChiNSX << endl;
};
void Hang::nhap()
{
    cout << "Nhap ma hang: ";
    fflush(stdin);
    gets(maHang);
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    NSX.nhap();
};
void Hang::xuat()
{
    cout << "Ma hang: " << maHang << endl;
    cout << "Ten hang: " << tenHang << endl;
    NSX.xuat();
};
int main()
{
    Hang h;
    h.nhap();
    cout << "THONG TIN MAT HANG\n";
    h.xuat();
    return 0;
}
