#include <iostream>
#include <iomanip>
using namespace std;
class hangHoa
{
private:
    int maHang;
    char tenHang[30];
    long tienTra;

public:
    void input();
    void output();
    long gettienTra()
    {
        return tienTra;
    }
    long settienTra(long t)
    {
        tienTra = t;
    }
};
class phieu
{
private:
    int maPhieu;
    char tenKhach[30];
    int soLoaiHang;
    hangHoa ds[15]; // so luong hang hoa note: ko de rong
    long tong;

public:
    void input();
    void output();
};
void hangHoa::input()
{
    cout << "Nhap ma hang: ";
    cin >> maHang;
    cout << "Nhap ten hang: ";
    fflush(stdin);
    gets(tenHang);
    cout << "Nhap tien tra: ";
    cin >> tienTra;
}
void hangHoa::output()
{
    cout << setw(15) << maHang;
    cout << setw(15) << tenHang;
    cout << setw(15) << tienTra << endl;
}
void phieu::input()
{
    cout << "Nhap ma phieu: ";
    cin >> maPhieu;
    cout << "Nhap ten khach: ";
    fflush(stdin);
    gets(tenKhach);
    cout << "Nhap so loai hang: ";
    cin >> soLoaiHang;
    for (int i = 0; i < soLoaiHang; i++)
    {
        ds[i].input();
    }
    tong = 0;
}
void phieu::output()
{
    cout << "MA PHIEU MUA HANG " << setw(35) << endl;
    cout << setw(15) << "MA PHIEU: " << maPhieu;
    cout << setw(25) << "TEN KHACH: " << tenKhach << endl;

    cout << setw(15) << "Ma hang";
    cout << setw(15) << "Ten hang";
    cout << setw(15) << "Tien tra" << endl;
    for (int i = 0; i < soLoaiHang; i++)
    {
        ds[i].output();
        tong += ds[i].gettienTra();
    }
    cout << "Tong tien: " << tong << endl;
}
int main()
{
    phieu p;
    p.input();
    cout << "THONG TIN" << endl;
    p.output();
    return 0;
}