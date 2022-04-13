#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class PTB2
{
private:
    float a, b, c;

public:
    PTB2();
    PTB2(float x, float y, float z);
    ~PTB2(); // ham huy
    void nhap();
    void xuat();
    void giaiPT();
};

PTB2::PTB2()
{
    a = b = c = 0;
}

PTB2::PTB2(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}
PTB2::~PTB2()
{
    a = b = c = 0;
}

void PTB2::nhap()
{
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
}
void PTB2::xuat()
{
    cout << "Phuong trinh: " << a << "X" << (char)253 << (b >= 0 ? "+" : "-") << abs(b) << "x" << (c >= 0 ? "+" : "-") << abs(c) << " = 0 " << endl;
}
void PTB2::giaiPT()
{
    if (a == 0)
    {
        cout << "Co mot nghiem: " << -c / b << endl;
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "Pt vo nghiem" << endl;
        else if (delta == 0)
            cout << "PT co nghiem kep x = " << -b / (2 * a) << endl;
        else
        {
            cout << "PT co 2 nghiem phan biet: " << (-b + sqrt(delta)) / (2 * a) << " va " << (-b - sqrt(delta)) / (2 * a) << endl;
        }
    }
}
int main()
{
    PTB2 PT(1, 1, 1);
    PT.xuat();
    PT.giaiPT();
    PTB2 Q;
    Q.nhap();
    Q.xuat();
    Q.giaiPT();
    return 0;
}