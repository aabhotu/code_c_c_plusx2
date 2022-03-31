#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
class mang
{
private:
    float *a;
    int n;

public:
    void nhap();
    void timSo();
};
void mang::nhap()
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    a = new float[n];
    for (int i = 0; i < n; i++)
    {
        // cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
};
void mang::timSo()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout << "Phan tu nho nhat: " << a[0] << endl;
    cout << "Phan tu lon nhat: " << a[n - 1];
}
int main()
{
    mang m;
    m.nhap();
    m.timSo();
    return 0;
}