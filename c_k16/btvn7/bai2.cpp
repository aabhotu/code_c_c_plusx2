#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void ChenMang(int a[], int &n, int pos, int x)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = x;
    n++;
}

void XoaMang(int a[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[100], n, x;
    do
    {
        cout << " nhap n ";
        cin >> n;
        if (n < 1 || n >= 100)
        {
            cout << " nhap lai n";
            cin >> n;
        }
    } while (n < 1 || n >= 100);

    NhapMang(a, n);
    cout << " nhap x ";
    cin >> x;

    // (1)
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7)
        {
            ChenMang(a, n, i + 1, x);
            i++;
        }
    }
    XuatMang(a, n);

    // (2)
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 != 0)
        {
            XoaMang(a, n, i);
            i--;
        }
    }
    cout << endl;
    XuatMang(a, n);

    //(3)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                XoaMang(a, n, j);
                j--;
            }
        }
    }
    cout << endl;
    XuatMang(a, n);

    return 0;
}