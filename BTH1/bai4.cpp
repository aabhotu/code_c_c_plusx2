#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class sach
{
private:
    char maSach[10];
    char tenSach[30];
    char nxb[15];
    long soTrang;
    long Giatien;

public:
    void nhap();
    void xuat();
};
void sach::nhap()
{
    cout << "Nhap ma sach: ";
    fflush(stdin);
    gets(maSach);
    cout << "Nhap ten sach: ";
    fflush(stdin);
    gets(tenSach);
    cout << "Nhap nha xuat ban: ";
    fflush(stdin);
    gets(nxb);
    cout << "Nhap so trang: ";
    cin >> soTrang;
    cout << "Nhap gia tien: ";
    cin >> Giatien;
};
void sach::xuat()
{
    cout << setw(15) << maSach;
    cout << setw(20) << tenSach;
    cout << setw(15) << nxb;
    cout << setw(15) << soTrang;
    cout << setw(15) << Giatien << endl;
};
int main()
{
    sach *s;
    int n;
    cout << "Nhap so sach: ";
    cin >> n;
    s = new sach[n];
    for (int i = 0; i < n; i++)
    {
        s[i].nhap();
    }
    cout << setw(15) << "Ma sach" << setw(20) << "Ten sach" << setw(15) << "Nha xuat ban" << setw(15) << "So trang" << setw(15) << "Gia tien" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].xuat();
    }
    return 0;
};