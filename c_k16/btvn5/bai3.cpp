#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
bool check(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    for (int i = 2; i < sum; i++)
        if (sum % i == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    NhapMang(a, n);
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            a[i] = -1;
        }
    }
    XuatMang(a, n);
    return 0;
}