#include <iostream>
#include <iomanip>
using namespace std;

class NhaCungCap
{
private:
    char maNCC[10];
    char tenNCC[30];
    char diaChi[30];

public:
    void nhap();
    void xuat();
};
class SanPham
{
private:
    char tenHang[15];
    float donGia;
    int soLuong;

public:
    void nhap();
    void xuat();
    friend class Phieu;
};
class Phieu
{
private:
    char maPhieu[10];
    char ngayLap[10];
    NhaCungCap ncc;
    SanPham *sanPhams;
    int soLuong;

public:
    void nhap();
    void xuat();
};
void NhaCungCap::nhap()
{
    cout << "Nhap ma NCC: ";
    fflush(stdin);
    gets(maNCC);
    cout << "Nhap ten NCC: ";
    fflush(stdin);
    gets(tenNCC);
    cout << "Nhap dia chi: ";
    fflush(stdin);
    gets(diaChi);
}
void NhaCungCap::xuat()
{
    cout << left << "Ma NCC: " << setw(15) << maNCC << "Ten NCC: " << setw(20) << tenNCC << endl;
    cout << "Dia chi: " << diaChi << endl;
}
void SanPham::nhap()
{
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap so luong: ";
    cin >> soLuong;
}
void SanPham::xuat()
{
    cout << left << setw(15) << tenHang << setw(15) << donGia << setw(15) << soLuong << setw(15) << donGia * soLuong << endl;
}
void Phieu::nhap()
{

    cout << "Nhap ma phieu: ";
    fflush(stdin);
    gets(maPhieu);
    cout << "Nhap ngay lap: ";
    fflush(stdin);
    gets(ngayLap);
    ncc.nhap();
    cout << "Nhap so luong san pham: ";
    cin >> soLuong;
    sanPhams = new SanPham[soLuong];
    for (int i = 0; i < soLuong; i++)
    {
        sanPhams[i].nhap();
    }
}
void Phieu::xuat()
{
    cout << left << "Ma phieu: " << setw(15) << maPhieu << "Ngay lap: " << setw(20) << ngayLap << endl;
    ncc.xuat();
    float tong = 0;
    cout << left << setw(15) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien" << endl;
    for (int i = 0; i < soLuong; i++)
    {
        tong += sanPhams[i].donGia * (float)sanPhams[i].soLuong;
        sanPhams[i].xuat();
    }
    cout << right << setw(50) << "cong thanh tien" << setw(15) << tong << endl;
}
int main()
{
    Phieu p;
    p.nhap();
    p.xuat();
    return 0;
}