#include <iomanip>
#include <iostream>
using namespace std;
class CanBo
{
private:
    char maCanBo[15];
    char hoTen[30];
    char ngaySinh[10];
    int soNgay;

public:
    void input();
    long luong();
    void output();
};
void CanBo::input()
{
    cout << "Nhap ma can bo: ";
    fflush(stdin);
    gets(maCanBo);
    cout << "Nhap ho ten: ";
    fflush(stdin);
    gets(hoTen);
    cout << "Nhap ngay sinh: ";
    fflush(stdin);
    gets(ngaySinh);
    cout << "Nhap so ngay lam viec: ";
    cin >> soNgay;
}
long CanBo::luong()
{
    long luong;
    luong = soNgay * 250000;
    return luong;
}
void CanBo::output()
{
    cout << setw(15) << left << maCanBo;
    cout << setw(18) << left << hoTen;
    cout << setw(15) << left << ngaySinh;
    cout << setw(15) << left << soNgay;
    cout << setw(15) << left << luong() << endl;
}
int main()
{
    CanBo cb;
    cb.input();
    cout << setw(15) << left << "Ma can bo";
    cout << setw(18) << left << "Ho ten";
    cout << setw(15) << left << "Ngay sinh";
    cout << setw(15) << left << "So ngay lam";
    cout << setw(15) << left << "Luong" << endl;
    cb.output();
    return 0;
}