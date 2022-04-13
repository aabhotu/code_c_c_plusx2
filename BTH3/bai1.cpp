#include <iostream>
#include <iomanip>
using namespace std;
class SinhVien
{
private:
    char maSV[10];
    char hoTen[30];
    float diemToan;
    float diemLy;
    float diemHoa;

public:
    void nhap();
    void xuat();
    friend void increase(SinhVien *sv, int n);
};
void SinhVien::nhap()
{
    cout << "Nhap ma sinh vien: ";
    fflush(stdin);
    gets(maSV);
    cout << "Nhap ho ten: ";
    fflush(stdin);
    gets(hoTen);
    cout << "Nhap diem toan: ";
    cin >> diemToan;
    cout << "Nhap diem ly: ";
    cin >> diemLy;
    cout << "Nhap diem hoa: ";
    cin >> diemHoa;
}
void SinhVien::xuat()
{
    cout << left << setw(10) << maSV
         << setw(30) << hoTen
         << setw(10) << diemToan
         << setw(10) << diemLy
         << setw(10) << diemHoa
         << setw(10) << diemToan + diemLy + diemHoa << endl;
}

void increase(SinhVien *sv, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((sv[i].diemToan + sv[i].diemLy + sv[i].diemHoa) > (sv[j].diemToan + sv[j].diemLy + sv[j].diemHoa))
            {
                SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien *sv = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        sv[i].nhap();
    }

    cout << left << setw(10) << "Ma SV"
         << setw(30) << "Ho ten"
         << setw(10) << "Diem Toan"
         << setw(10) << "Diem Ly"
         << setw(10) << "Diem Hoa"
         << setw(10) << "Diem TB" << endl;

    for (int i = 0; i < n; i++)
    {
        sv[i].xuat();
    }

    increase(sv, n);

    cout << left << setw(10) << "Ma SV"
         << setw(30) << "Ho ten"
         << setw(10) << "Diem Toan"
         << setw(10) << "Diem Ly"
         << setw(10) << "Diem Hoa"
         << setw(10) << "Diem TB" << endl;

    for (int i = 0; i < n; i++)
    {
        sv[i].xuat();
    }

    return 0;
}