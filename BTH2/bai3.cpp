#include <iostream>
#include <iomanip>
using namespace std;
class Hang
{
private:
    char maHang[10];
    char tenHang[30];
    int donGia;

public:
    void nhap();
    void xuat();
};
class Phieu
{
private:
    char maPhieu[10];
    Hang *hang;
    int n;

public:
    void nhap();
    void xuat();
};
void Hang::nhap()
{
    cout << "Nhap ma hang: ";
    fflush(stdin);
    gets(maHang);
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap don gia: ";
    cin >> donGia;
};
void Hang::xuat()
{
    cout << setw(10) << maHang << setw(15) << tenHang << setw(10) << donGia << endl;
};
void Phieu::nhap()
{
    cout << "Nhap ma phieu: ";
    fflush(stdin);
    gets(maPhieu);
    cout << "Nhap so hang: ";
    cin >> n;
    hang = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        hang[i].nhap();
    }
};
void Phieu::xuat()
{
    cout << "Ma phieu: " << maPhieu << endl;
    cout << setw(10) << "Ma hang" << setw(15) << "Ten hang" << setw(10) << "Don gia" << endl;
    for (int i = 0; i < n; i++)
    {
        hang[i].xuat();
    }
};
int main()
{
    Phieu p;
    p.nhap();
    cout << "THONG TIN MAT HANG TRONG PHIEU" << endl;
    p.xuat();
    return 0;
}