#include <iostream>
#include <iomanip>
using namespace std;
class sinhVien
{
private:
    char hoTen[30];
    int namSinh;
    char gioiTinh[10];
    float diemTB;
    char daoDuc[10];

public:
    void nhap();
    void xuat();
};
void sinhVien::nhap()
{
    cout << "Nhap ho ten: ";
    fflush(stdin);
    gets(hoTen);
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
    cout << "Nhap gioi tinh: ";
    fflush(stdin);
    gets(gioiTinh);
    cout << "Nhap diem trung binh: ";
    fflush(stdin);
    cin >> diemTB;
    cout << "Nhap dao duc: ";
    fflush(stdin);
    gets(daoDuc);
}
void sinhVien::xuat()
{
    // cout << "Ho ten: " << hoTen << endl;
    // cout << "Nam sinh: " << namSinh << endl;
    // cout << "Gioi tinh: " << gioiTinh << endl;
    // cout << "Diem trung binh: " << diemTB << endl;
    // cout << "Dao duc: " << daoDuc << endl;
    cout << setw(20) << left << hoTen;
    cout << setw(15) << left << namSinh;
    cout << setw(10) << left << gioiTinh;
    cout << setw(8) << left << diemTB;
    cout << setw(8) << left << daoDuc << endl;
}
int main()
{
    sinhVien sv;
    sv.nhap();
    cout << setw(20) << left << "hoTen";
    cout << setw(15) << left << "namSinh";
    cout << setw(10) << left << "gioiTinh";
    cout << setw(8) << left << "diemTB";
    cout << setw(8) << left << "daoDuc" << endl;
    sv.xuat();
    return 0;
}