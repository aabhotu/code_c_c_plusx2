#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Array
{
private:
    int *values;
    int n;

public:
    Array();
    Array(int n);
    ~Array();
    void nhap();
    void xuat();
};
Array::Array()
{
    values = NULL;
    n = 0;
}
Array::Array(int n)
{
    values = new int[n];
    this->n = n;
}
Array::~Array()
{
    delete[] values;
}
void Array::nhap()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> values[i];
    }
}
void Array::xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }
}
int main()
{
    Array a(5);
    a.nhap();
    a.xuat();
    int n;
    cout << "\nNhap n: ";
    cin >> n;
    Array arr(n);
    arr.nhap();
    arr.xuat();
    arr.~Array();
    return 0;
}