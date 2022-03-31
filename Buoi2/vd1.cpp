#include <iostream>
#include <string.h>
using namespace std;
class nguoi
{
private:
    char hoTen[30];
    char ns[10];
    float chieuCao;

public:
    float getchieuCao() // tra ve gtri cho thuoc tinh
    {
        return chieuCao;
    }
    void setchieuCao(float t) // thiet lap gtri moi
    {
        chieuCao = t;
    }
    char *getHoTen()
    {
        return hoTen;
    }
    void setHoTen(char name[30])
    {
        strcpy(hoTen, name);
    }
};
main()
{
    nguoi ng1;
    ng1.setchieuCao(1.75);
    cout << "Chieu cao: " << ng1.getchieuCao();
    ng1.setHoTen("Nguyen Van A");
    cout << "\nHo ten: " << ng1.getHoTen();
}