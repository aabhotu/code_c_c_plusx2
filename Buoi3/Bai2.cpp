#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class XeHoi
{
private:
    char hangSX[20];
    char mauSon[20];
    int namSX;
    char xuatSu[20];
    int gia;

public:
    void nhap();
    void xuat();
    friend void TimHang(XeHoi HangXe[20], int n);
    friend void SapXep(XeHoi Xe[20], int n);
};
void XeHoi::nhap()
{
    cout << "Nhap hang SX: ";
    fflush(stdin);
    gets(hangSX);
    cout << "Nhap mau son: ";
    fflush(stdin);
    gets(mauSon);
    cout << "Nhap nam SX: ";
    cin >> namSX;
    cout << "Nhap xuat su: ";
    fflush(stdin);
    gets(xuatSu);
    cout << "Nhap gia: ";
    cin >> gia;
};
void XeHoi::xuat()
{
    cout << setw(15) << hangSX << setw(15) << mauSon << setw(15) << namSX << setw(15) << xuatSu << setw(15) << gia << endl;
};

void TimHang(XeHoi HangXe[20], int n)
{
    char hang[20];
    cout << "Nhap hang SX can tim: ";
    fflush(stdin);
    gets(hang);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(hang, HangXe[i].hangSX) == 0)
        {
            HangXe[i].xuat();
        }
    }
}

void SapXep(XeHoi Xe[20], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (Xe[i].gia > Xe[j].gia)
            {
                XeHoi temp = Xe[i];
                Xe[i] = Xe[j];
                Xe[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so luong xe: ";
    cin >> n;
    XeHoi xe[n];
    for (int i = 0; i < n; i++)
    {
        xe[i].nhap();
    }
    cout << "THONG TIN XE HOI" << endl;
    cout << setw(15) << "Hang SX" << setw(15) << "Mau Son" << setw(15) << "Nam SX" << setw(15) << "Xuat Su" << setw(15) << "Gia" << endl;
    for (int i = 0; i < n; i++)
    {
        xe[i].xuat();
    }

    cout << "Sap xep gia" << endl;
    SapXep(xe, n);
    for (int i = 0; i < n; i++)
    {
        xe[i].xuat();
    }

    cout << "Tim kiem hang SX" << endl;
    TimHang(xe, n);

    return 0;
}