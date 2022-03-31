// viet chương trinh huong doi tuong giai quyet bai toan tinh
// chu vi va dien tich cua mot tam giac

#include <iostream>
#include <cmath>
using namespace std;
class tamGiac
{
private:
    float a, b, c, chuVi, dienTich;

public:
    void input();
    void output();
    float ChuVi();
    float DienTich();
};
void tamGiac::input()
{
    cout << "nhap canh a: ";
    cin >> a;
    cout << "nhap canh b: ";
    cin >> b;
    cout << "nhap canh c: ";
    cin >> c;
}
void tamGiac::output()
{
    cout << "Canh a: " << a << endl;
    cout << "Canh b: " << b << endl;
    cout << "Canh c: " << c << endl;
}
float tamGiac::ChuVi()
{
    chuVi = a + b + c;
    return chuVi;
}
float tamGiac::DienTich()
{
    float p = chuVi / 2;
    dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
    return dienTich;
}
int main()
{
    tamGiac tg1;
    tg1.input();
    tg1.output();
    cout << "Chu vi: " << tg1.ChuVi() << endl;
    cout << "Dien tich: " << tg1.DienTich() << endl;
    return 0;
}
