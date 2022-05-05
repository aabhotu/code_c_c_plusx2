#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Electronic
{
protected:
    int congSuat;
    int dienAp;

public:
    Electronic(int x, int y);
};

class MayGiat : public Electronic
{
private:
    int dungTich;
    char loai[30];

public:
    MayGiat(int x, int y, int z, char *t);
    void output();
};

class TuLanh : public Electronic
{
private:
    int dungTich;
    int soNgan;

public:
    TuLanh(int x, int y, int a, int b);
    void output();
};

Electronic::Electronic(int x, int y)
{
    congSuat = x;
    dienAp = y;
}
MayGiat::MayGiat(int x, int y, int z, char *t) : Electronic(x, y)
{
    dungTich = z;
    strcpy(loai, t);
}

void MayGiat::output()
{
    cout << "Cong suat la: " << congSuat << endl;
    cout << "Dien ap la: " << dienAp << endl;
    cout << "Dung tich la: " << dungTich << endl;
    cout << "Loai la: " << loai << endl;
}

TuLanh::TuLanh(int x, int y, int a, int b) : Electronic(x, y)
{
    dungTich = a;
    soNgan = b;
}
void TuLanh::output()
{
    cout << "Cong suat la: " << congSuat << endl;
    cout << "Dien ap la: " << dienAp << endl;
    cout << "Dung tich la: " << dungTich << endl;
    cout << "So ngan la: " << soNgan << endl;
}

int main()
{
    cout << "THONG TIN MAY GIAT" << endl;
    MayGiat a(1000, 15, 8, "panasonic");
    a.output();
    cout << "\nTHONG TIN TU LANH" << endl;
    TuLanh b(1500, 30, 15, 2);
    b.output();
    return 0;
}