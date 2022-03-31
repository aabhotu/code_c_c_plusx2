#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
class mang
{
private:
    int *a;
    int n;

public:
    void nhap();
    void tangDan();
};
void mang::nhap()
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        // cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}
void mang::tangDan()
{
    cout << "Sap xep tang dan: ";
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
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
};
int main()
{
    mang m;
    m.nhap();
    m.tangDan();
    return 0;
}