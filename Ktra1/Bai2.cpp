#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Phieu;
class Khach
{
private:
    char maKH[30];
    char tenKH[30];
    char diaChi[30];

public:
    void nhap();
    void xuat();
};

class Hang
{
private:
    char tenHang[30];
    char donVi[30];
    int soLuong;
    float donGia;

public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void Xoa(Phieu &a, int soLuongHang);
};

class Phieu
{
private:
    char maPhieu[30];
    char ngayLap[30];
    Khach x;
    Hang *y;
    int n;

public:
    void nhap();
    void xuat();
    friend void Xoa(Phieu &a, int soLuongHang);
};

void Khach::nhap()
{
    cout << "Nhap ma khach hang: ";
    fflush(stdin);
    gets(maKH);
    cout << "Nhap ten khach hang: ";
    fflush(stdin);
    gets(tenKH);
    cout << "Nhap dia chi khach hang: ";
    fflush(stdin);
    gets(diaChi);
}
void Khach::xuat()
{
    cout << left << "Ma khach hang: " << setw(20) << maKH << "Ten khach hang: " << setw(50) << tenKH << endl;
    cout << "Dia chi: " << diaChi << endl;
}

void Hang::nhap()
{
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap don vi: ";
    fflush(stdin);
    gets(donVi);
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap don gia: ";
    cin >> donGia;
}

void Hang::xuat()
{
    cout << setw(20) << tenHang << setw(20) << donVi << setw(20) << soLuong << setw(20) << donGia << setw(20) << (long)soLuong * donGia << endl;
}

void Phieu::nhap()
{
    cout << "Nhap ma phieu: ";
    fflush(stdin);
    gets(maPhieu);
    cout << "Nhap ngay lap: ";
    fflush(stdin);
    gets(ngayLap);
    x.nhap();
    cout << "Nhap so hang: ";
    cin >> n;
    y = new Hang[n];
    for (int i = 0; i < n; i++)
    {
        y[i].nhap();
    }
}

void Phieu::xuat()
{
    cout << left << "Ma phieu: " << setw(20) << maPhieu << "\tNgay lap: " << setw(20) << ngayLap << endl;
    x.xuat();
    long tong = 0;
    cout << left << setw(10) << "STT" << setw(20) << "ten Hang" << setw(20) << "don Vi" << setw(20) << "so Luong" << setw(20) << "don Gia" << setw(20) << "thanh tien" << endl;
    for (int i = 0; i < n; i++)
    {
        tong += y[i].donGia + (long)y[i].soLuong;
        cout << setw(10) << i;
        y[i].xuat();
    }

    cout << "\t\t\t\t\t\tCong thanh tien: " << tong << endl;
}

void Xoa(Phieu &a, int soLuongHang)
{
    for (int i = 0; i < a.n; i++)
    {
        if (a.y[i].soLuong == soLuongHang)
        {
            for (int j = i; j < a.n - 1; j++)
            {
                a.y[j] = a.y[j + 1];
            }
            a.n--;
        }
    }
}

int main()
{
    Phieu phieu;
    phieu.nhap();
    phieu.xuat();
    cout << "\nTHONG TIN SAU KHI SUA" << endl;
    Xoa(phieu, 40);
    phieu.xuat();
    return 0;
}