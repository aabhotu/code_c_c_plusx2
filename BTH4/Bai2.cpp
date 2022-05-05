#include <iostream>
using namespace std;
class Printer
{
protected:
    float trongLuong;
    char hangSX[30];
    char namSX[15];
    int tocDo;
    friend void SuaNam(printer &a);
};
class DotPrinter : public Printer
{
private:
    int matDoKim;

public:
    void nhap();
    void xuat();
};
class LaserPrinter : public Printer
{
private:
    int doPhanGiai;

public:
    void nhap();
    void xuat();
};
