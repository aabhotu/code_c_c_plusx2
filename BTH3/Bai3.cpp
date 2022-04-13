#include <iostream>
#include <iomanip>
using namespace std;

class Hang;
class Date
{
private:
    int ngay, thang, nam;

public:
    void nhap();
    void xuat();
    friend class Hang;
    friend void TimHang(Hang *hang, int n);
};
class Hang
{
private:
    char maHang[10];
    char tenHang[30];
    Date ngaySX;

public:
    void nhap();
    void xuat();
    friend void TimHang(Hang *hang, int n);
};
void Date::nhap()
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
    cout << ngay << "/" << thang << "/" << nam << endl;
}
void Hang::nhap()
{
    cout << "Nhap ma hang: ";
    fflush(stdin);
    gets(maHang);
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    ngaySX.nhap();
}
void Hang::xuat()
{
    cout << setw(10) << maHang << setw(15) << tenHang << setw(15);
    ngaySX.xuat();
}
void TimHang(Hang *hang, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (hang[i].ngaySX.nam == 2017)
        {
            hang[i].xuat();
        }
    }
}
int main()
{
    int n;
    cout << "Nhap so hang: ";
    cin >> n;
    Hang *hang = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        hang[i].nhap();
    }
    cout << "THONG TIN HANG" << endl;
    cout << setw(10) << "Ma hang" << setw(15) << "Ten hang" << setw(15) << "Ngay sx" << endl;

    for (int i = 0; i < n; i++)
    {
        hang[i].xuat();
    }
    cout << "TIM HANG" << endl;
    cout << setw(10) << "Ma hang" << setw(15) << "Ten hang" << setw(15) << "Ngay sx" << endl;
    TimHang(hang, n);
    return 0;
}