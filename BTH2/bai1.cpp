#include <iostream>
#include<iomanip>

using namespace std;

class Date
{
private:
    int date, month, year;

public:
    void nhap();
    void xuat();
};

class NhanSu
{
private:
    char maNhanSu[10];
    char hoTen[30];
    Date dateNS;

public:
    void nhap();
    void xuat();
};
void Date::nhap()
{
    cout << "Nhap ngay: ";
    cin >> date;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
}
void Date::xuat()
{
    cout << date << "/" << month << "/" << year << endl;
}
void NhanSu::nhap(){
    cout<<"Nhap ma nhan su: "; fflush(stdin); gets(maNhanSu);
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    dateNS.nhap();
};
void NhanSu::xuat(){
    cout<<"Ma nhan su: "<<maNhanSu<<endl;
    cout<<"Ho ten: "<<hoTen<<endl;
    dateNS.xuat();
};
int main(){
    NhanSu nhanSu;
    nhanSu.nhap();
    cout<<"THONG TIN";
    nhanSu.xuat();
    return 0;
}