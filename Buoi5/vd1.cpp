#include <iostream>
using namespace std;

class SoPhuc
{
private:
    int phanThuc, phanAo;

public:
    void nhap();
    SoPhuc()
    {
        phanThuc = 0;
        phanAo = 0;
    }

    SoPhuc(int a, int b)
    {
        phanThuc = a;
        phanAo = b;
    }

    friend istream &operator>>(istream &in, SoPhuc &x)
    {
        cout << "Nhap phan thuc: " << endl;
        in >> x.phanThuc;
        cout << "Nhap phan ao: "<<endl;
        in >> x.phanAo;
        return in;
    }

    // SoPhuc operator+(SoPhuc b)
    // {
    //     SoPhuc kq;
    //     kq.phanThuc = phanThuc + b.phanThuc;
    //     kq.phanAo = phanAo + b.phanAo;
    //     return kq;
    // }

    SoPhuc operator-()
    {
        SoPhuc kq;
        kq.phanThuc = -phanThuc;
        kq.phanAo = -phanAo;
        return kq;
    }

    friend ostream &operator<<(ostream &out, SoPhuc &x)
    {
        out << x.phanThuc << " + " << "i" << x.phanAo<<endl;
        return out;
    }

    friend SoPhuc operator+(SoPhuc a, SoPhuc b)
    {
        SoPhuc kq;
        kq.phanThuc = a.phanThuc + b.phanThuc;
        kq.phanAo = a.phanAo + b.phanAo;
        return kq;
    }
    void xuat()
    {
        cout << phanThuc << " + i" << phanAo << endl;
    }
};

int main()
{
    SoPhuc a(4, 5), b(7, 8);
    // SoPhuc t = a + b;
    // t.xuat();
    SoPhuc m = -a;
    cout << endl;
    m.xuat();
    SoPhuc c, d;
    cin >> c;
    cout << c;
    cin >> d;
    cout << d;
    SoPhuc cd = c + d;
    cout << cd;
    return 0;
}