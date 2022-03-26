#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float x;
    cin >> x;
    do
    {
        cin >> n;
    } while (n < 0);

    int gt = 1;
    int tong = 0;
    if (n % 2 == 0)
    {

        float sum = 0;
        for (int i = 1; i <= n; i++)
        {
            gt = gt * i;
            sum += (pow(x, i) + 2 * i) / gt;
        }
        cout << fixed << setprecision(4) << sum + 2021 << endl;
    }
    else
    {

        float sum = 0;
        for (int i = 1; i <= n; i++)
        {
            tong += i;
            sum += (pow(x, i) + 2 * i) / tong;
        }
        cout << fixed << setprecision(4) << sum + 2022 << endl;
    }
    return 0;
}
