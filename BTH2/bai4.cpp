#include <iostream>
#include <iomanip>

using namespace std;

class QuanLy
{
private:
    char maQuanLy[10];
    char quanLy[30];

public:
    void nhap();
    void xuat();
};
class May
{
private:
    char maMay[10];
    char kieuMay[30];
    char tinhTrang[10];

public:
    void nhap();
    void xuat();
};
class PhongMay
{
private:
    char maPhong[10];
    char tenPhong[30];
    QuanLy quanLy;
    May *may;
    int n;

public:
    void nhap();
    void xuat();
};
void QuanLy::nhap()
{
    cout << "Nhap ma quan ly: ";
    fflush(stdin);
    gets(maQuanLy);
    cout << "Nhap ten quan ly: ";
    fflush(stdin);
    gets(quanLy);
}
void QuanLy::xuat()
{
    cout << "Ma quan ly: " << maQuanLy << endl;
    cout << "Ten quan ly: " << quanLy << endl;
}
void May::nhap()
{
    cout << "Nhap ma may: ";
    fflush(stdin);
    gets(maMay);
    cout << "Nhap kieu may: ";
    fflush(stdin);
    gets(kieuMay);
    cout << "Nhap tinh trang: ";
    fflush(stdin);
    gets(tinhTrang);
}
void May::xuat()
{
    cout << setw(10) << maMay << setw(20) << kieuMay << setw(20) << tinhTrang << endl;
}
void PhongMay::nhap()
{
    cout << "Nhap ma phong: ";
    fflush(stdin);
    gets(maPhong);
    cout << "Nhap ten phong: ";
    fflush(stdin);
    gets(tenPhong);
    quanLy.nhap();
    cout << "Nhap so may: ";
    cin >> n;
    may = new May[n];
    for (int i = 0; i < n; i++)
    {
        may[i].nhap();
    }
}
void PhongMay::xuat()
{
    cout << "Ma phong: " << maPhong << endl;
    cout << "Ten phong: " << tenPhong << endl;
    quanLy.xuat();
    cout << setw(10) << "Ma may" << setw(20) << "Kieu may" << setw(20) << "Tinh trang" << endl;
    for (int i = 0; i < n; i++)
    {
        may[i].xuat();
    }
}
int main()
{
    PhongMay phongMay;
    phongMay.nhap();
    cout << "\nTHONG TIN" << endl;
    phongMay.xuat();
    return 0;
}