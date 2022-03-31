#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class SINHVIEN
{
private:
    char maSV[10];
    char hoTen[30];
    int tuoi;
    float diem;

public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout << "\n Nhap ma sinh vien: ";
    fflush(stdin);
    gets(maSV);
    cout << "\n Nhap ho ten: ";
    fflush(stdin);
    gets(hoTen);
    cout << "\n Nhap tuoi: ";
    cin >> tuoi;
    cout << "\n Nhap diem: ";
    cin >> diem;
};
void SINHVIEN::xuat()
{
    cout << "\n Ma sinh vien: " << maSV;
    cout << "\n Ho ten: " << hoTen;
    cout << "\n Tuoi: " << tuoi;
    cout << "\n Diem: " << diem;
};
int main()
{
    SINHVIEN a, b;
    cout << "\n Nhap thong tin sinh vien A: ";
    a.nhap();
    cout << "\n Nhap thong tin sinh vien B: ";
    b.nhap();
    cout << "\n Thong tin sinh vien A: ";
    a.xuat();
    cout << "\n Thong tin sinh vien B: ";
    b.xuat();
    return 0;
}