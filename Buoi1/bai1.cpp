#include<iostream>
#include<cmath>
using namespace std;

// class TamGiac
// {
// private: // pham vi: private, protected, public
//     float a, b, c, p, s;

// public:
//     void input()
//     {
//         cout << "\n nhap canh a: ";
//         cin >> a;
//         cout << "\n nhap canh b: ";
//         cin >> b;
//         cout << "\n nhap canh c: ";
//         cin >> c;
//     };
//     void output()
//     {
//         cout << "Canh a: " << a << endl;
//         cout << "Canh b: " << b << endl;
//         cout << "Canh c: " << c << endl;
//     };
// };

// C2-mau 2
class tamGiac
{
private:
    float a, b, c, p, s;

public:
    void input();
    void output();
    float tinh();
};
void tamGiac::input()
{ // :: toan tu pham vi
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
float tamGiac::tinh()
{
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
int main()
{
    tamGiac tamGiac1;
    tamGiac1.input();
    tamGiac1.output();
    cout << "Dien tich tam giac: " << tamGiac1.tinh() << endl;
    return 0;
}