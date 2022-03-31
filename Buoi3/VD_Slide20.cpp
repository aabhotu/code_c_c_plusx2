#include <iostream>
#include <iomanip>
using namespace std;
class NhaSanXuat
{
private:
    int maNSX;
    char tenNSX[20];
    char diaChi[20];
    friend class Hang;
};
class Hang
{
private:
    int maHang;
    char tenHang[20];
    int donGia;
    float trongLuong;
    NhaSanXuat nsx;

public:
    void nhap();
    void xuat();
};
void Hang::nhap()
{
    cout << "Nhap ma hang: ";
    cin >> maHang;
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap trong luong: ";
    cin >> trongLuong;
    cout << "Nhap ma NSX: ";
    cin >> nsx.maNSX;
    cout << "Nhap ten NSX: ";
    fflush(stdin);
    gets(nsx.tenNSX);
    cout << "Nhap dia chi NSX: ";
    fflush(stdin);
    gets(nsx.diaChi);
}
void Hang::xuat()
{
    cout << "\nMa hang: " << maHang;
    cout << "\nTen hang: " << tenHang;
    cout << "\nDon gia: " << donGia;
    cout << "\nTrong luong: " << trongLuong;
    cout << "\nMa NSX: " << nsx.maNSX;
    cout << "\nTen NSX: " << nsx.tenNSX;
    cout << "\nDia chi NSX: " << nsx.diaChi;
};
int main()
{
    Hang h;
    h.nhap();
    cout << "Thong tin don hang" << endl;
    h.xuat();
    return 0;
}