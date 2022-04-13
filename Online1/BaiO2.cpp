#include <iostream>
#include <iomanip>
using namespace std;

class Phieu;
class BangDiem
{
private:
    char tenMon[10];
    int soTrinh;
    float diem;

public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void TimSotrinh(Phieu a);
    friend void insert(Phieu a);
};
class Phieu
{
private:
    char maSV[10];
    char tenSV[30];
    char lop[10];
    int khoa;
    BangDiem *bangDiem;
    int n;

public:
    void nhap();
    void xuat();
    friend void insert(Phieu a);
    friend void TimSotrinh(Phieu a);
};
void BangDiem::nhap()
{
    cout << "Nhap ten mon: ";
    fflush(stdin);
    gets(tenMon);
    cout << "Nhap so trinh: ";
    cin >> soTrinh;
    cout << "Nhap diem: ";
    cin >> diem;
}
void BangDiem::xuat()
{
    cout << left << setw(20) << tenMon << setw(10) << soTrinh << setw(10) << diem << endl;
}
void Phieu::nhap()
{
    cout << "Nhap ma SV: ";
    fflush(stdin);
    gets(maSV);
    cout << "Nhap ten SV: ";
    fflush(stdin);
    gets(tenSV);
    cout << "Nhap lop: ";
    fflush(stdin);
    gets(lop);
    cout << "Nhap khoa: ";
    cin >> khoa;
    cout << "Nhap so mon: ";
    cin >> n;
    bangDiem = new BangDiem[n];
    for (int i = 0; i < n; i++)
    {
        bangDiem[i].nhap();
    }
}
void Phieu::xuat()
{
    cout << "\t\t\t\tPHIEU BAO DIEM" << endl;
    float s = 0;
    float tongTrinh = 0;
    cout << left << "Ma SV: " << setw(15) << maSV << "Ten SV: " << setw(20) << tenSV << endl;
    cout << "Lop: " << setw(15) << lop << "Khoa: " << setw(20) << khoa << endl;
    cout << "bang diem: " << endl;
    cout << left << setw(20) << "ten mon" << setw(10) << "So trinh" << setw(10) << "Diem" << endl;

    for (int i = 0; i < n; i++)
    {
        tongTrinh += bangDiem[i].soTrinh;
        s += bangDiem[i].soTrinh * bangDiem[i].diem;
        bangDiem[i].xuat();
    }
    cout << right << setw(30) << "diem trung binh " << s / tongTrinh << endl;
}

void TimSotrinh(Phieu a)
{
    cout << left << setw(20) << "ten mon" << setw(10) << "So trinh" << setw(10) << "Diem" << endl;
    for (int i = 0; i < a.n; i++)
    {
        if (a.bangDiem[i].soTrinh > 3)
            a.bangDiem[i].xuat();
    }
}

void insert(Phieu a)
{
    int pos;
    cout << "Nhap vi tri can chen: ";
    do
    {
        cin >> pos;
        if (pos < 1 || pos > a.n + 1)
            cout << "Vi tri khong hop le, vui long nhap lai: ";
    } while (pos < 1 || pos > a.n + 1);
    BangDiem temp;
    temp.nhap();
    a.n++;
    for (int i = a.n - 1; i >= pos; i--)
    {
        a.bangDiem[i] = a.bangDiem[i - 1];
    }
    a.bangDiem[pos - 1] = temp;
    a.xuat();
}

int main()
{
    Phieu p;
    p.nhap();
    p.xuat();
    TimSotrinh(p);
    insert(p);
    return 0;
}