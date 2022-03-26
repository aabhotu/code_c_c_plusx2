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
void saptang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
bool check(int n)
{
    do
    {
        int temp = n % 10;
        if (temp != 7 && temp != 4)
            return false;
        n = n / 10;
    } while (n > 0);
    return true;
}
void xoa(int a[], int &n, int vtx)
{
    int i;
    for (i = vtx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void xoaSDD(int a[], int &n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            xoa(a, n, i);
            i--;
        }
    }
}
int main()
{
    int arr[10000];
    int n;
    cin >> n;
    NhapMang(arr, n);
    xoaSDD(arr, n);
    saptang(arr, n);
    XuatMang(arr, n);
    return 0;
}