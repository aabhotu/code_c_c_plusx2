#include <iostream>
#include <iomanip>
using namespace std;
class HangHoa
{
private:
    int maHang;
    char tenHang[20];
    int soLuong;
    int donGia;

public:
    void nhap();
    void xuat();
    friend class HoaDon;
};
class HoaDon
{
private:
    int maHD;
    char donViNhanHang[20];
    char ngThanhToan[20];
    char ngNhan[20];
    int soLuong;
    HangHoa *hangHoa;
    int tong = 0;

public:
    void nhap();
    void xuat();
};
void HangHoa::nhap()
{
    cout << "Nhap ma hang: ";
    cin >> maHang;
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
}
void HangHoa::xuat()
{
    cout << setw(10) << maHang << setw(15) << tenHang << setw(15)
         << soLuong << setw(15) << donGia << setw(15) << soLuong * donGia << endl;
}
void HoaDon::nhap()
{
    cout << "Nhap ma hoa don: ";
    cin >> maHD;
    cout << "Nhap don vi nhan hang: ";
    fflush(stdin);
    gets(donViNhanHang);
    cout << "Nhap nguoi thanh toan: ";
    fflush(stdin);
    gets(ngThanhToan);
    cout << "Nhap nguoi nhan hang: ";
    fflush(stdin);
    gets(ngNhan);
    cout << "Nhap so luong hang hoa: ";
    cin >> soLuong;
    hangHoa = new HangHoa[soLuong];
    for (int i = 0; i < soLuong; i++)
    {
        hangHoa[i].nhap();
    }
}
void HoaDon::xuat()
{
    cout << "\nMa hoa don: " << maHD;
    cout << "\nDon vi nhan hang: " << donViNhanHang;
    cout << "\nNguoi thanh toan: " << ngThanhToan;
    cout << "\nNguoi nhan hang: " << ngNhan << endl;
    cout << setw(10) << "Ma hang" << setw(15) << "ten hang" << setw(15)
         << "So luong" << setw(15) << "Don gia" << setw(15)
         << "Thanh tien" << endl;
    for (int i = 0; i < soLuong; i++)
    {
        hangHoa[i].xuat();
        tong += hangHoa[i].soLuong * hangHoa[i].donGia;
    }
    cout << setw(65) << "Tong tien: " << tong << endl;
}
int main()
{
    HoaDon hd;
    hd.nhap();
    cout << "THONG TIN HOA DON" << endl;
    hd.xuat();
    return 0;
}