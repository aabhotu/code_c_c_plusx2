#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Date
{
private:
    int ngay, thang, nam;

public:
    void nhap();
    void xuat();
};
class DiaChi
{
private:
    char dienThoai[12];
    char phuong[30];
    char quan[30];
    char thanhPho[30];
    friend class DoanhNghiep;
};
class DoanhNghiep
{
private:
    int maDN;
    char tenDN[60];
    Date ngayTL;
    DiaChi diaChi;
    char giamDoc[30];
    long doanhThu;

public:
    void nhap();
    void xuat();
} void Date::nhap()
{
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
}
void Date::xuat()
{
    cout << ngay << "/" << thang << "/" << nam;
}
void DoanhNghiep::nhap()
{
    cout << "Nhap ma doanh nghiep: ";
    cin >> maDN;
    cout << "Nhap ten doanh nghiep: ";
    fflush(stdin);
    gets(tenDN);
    ngayTL.nhap();
    cout << "Nhap dien thoai: ";
    fflush(stdin);
    gets(diaChi.dienThoai);
    cout << "Nhap phuong: ";
    fflush(stdin);
    gets(diaChi.phuong);
    cout << "Nhap quan: ";
    fflush(stdin);
    gets(diaChi.quan);
    cout << "Nhap thanh pho: ";
    fflush(stdin);
    gets(diaChi.thanhPho);
    cout << "Nhap giam doc: ";
    fflush(stdin);
    gets(giamDoc);
    cout << "Nhap doanh thu: ";
    cin >> doanhThu;
}
void DoanhNghiep::xuat()
{
    cout <<
}