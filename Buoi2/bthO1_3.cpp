#include <iostream>
using namespace std;
class nhanVien
{
private:
    char hoten[30];
    char chucVu[20];

public:
    void input();
    void output();
};
class phongMay
{
private:
    int maPhong;
    char tenPhong[30];
    char tenTruongPhong[30];

public:
    void input();
    void output();
};
class taiSan
{
private:
    char tenTS[30];
    char tinhTrang[15];

public:
    void input();
    void output();
};
class phieu
{
private:
    int maPhieu;
    char ngayLapPhieu[15];
    nhanVien nv;
    phongMay pm;
    taiSan ts[20];

public:
    void input();
    void output();
};