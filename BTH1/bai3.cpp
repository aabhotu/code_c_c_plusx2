#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class hangHoa
{
private:
    char maHang[10];
    char tenHang[30];
    float donGia;
    int soLuong;

public:
    void nhap();
    void xuat();
    float getDonGia()
    {
        return donGia;
    }
    float setDonGia(float t)
    {
        donGia = t;
    }
    int getsoLuong()
    {
        return soLuong;
    }
    int setsoLuong(int t)
    {
        soLuong = t;
    }
};
void hangHoa::nhap()
{
    cout << "Nhap ma hang: ";
    fflush(stdin);
    gets(maHang);
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap so luong: ";
    cin >> soLuong;
};
void hangHoa::xuat()
{
    cout << setw(15) << maHang;
    cout << setw(15) << tenHang;
    cout << setw(15) << donGia;
    cout << setw(15) << soLuong;
    cout << setw(15) << donGia * float(soLuong) << endl;
};
int main()
{
    hangHoa *hh;
    int n;
    cout << "Nhap so hang hoa: ";
    cin >> n;
    hh = new hangHoa[n];
    for (int i = 0; i < n; i++)
    {
        hh[i].nhap();
    }
    cout << "THONG TIN MAT HANG" << endl;
    cout << setw(15) << "Ma hang" << setw(15) << "Ten hang" << setw(15) << "Don gia" << setw(15)
         << "So luong" << setw(15) << "Thanh tien" << endl;
    for (int i = 0; i < n; i++)
    {
        hh[i].xuat();
    }
    return 0;
}