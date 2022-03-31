#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class rectangle
{
private:
    float width;
    float height;

public:
    void input();
    void ve();
    float dienTich();
    float chuVi();
};
void rectangle::input()
{
    cout << "Nhap chieu dai: ";
    cin >> width;
    cout << "Nhap chieu rong: ";
    cin >> height;
};
void rectangle::ve()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
};
float rectangle::dienTich()
{
    return width * height;
};
float rectangle::chuVi()
{
    return (width + height) * 2;
};
int main()
{
    rectangle hcn;
    hcn.input();
    hcn.ve();
    cout << "Dien tich hinh chu nhat: " << hcn.dienTich() << endl;
    cout << "Chu vi hinh chu nhat: " << hcn.chuVi();
    return 0;
}