#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    float x;
    cin >> n >> x;
    float L;
    if (n % 2 == 0)
    {
        L = (float)abs(log(x) / log(2) + exp(n) + 2021);
    }
    else
    {
        L += 2021;
        for (int i = 1; i <= n; i++)
        {
            L += (2 * i - 1) / pow(x, i);
        }
    }
    cout << setprecision(4) << fixed << L;
    return 0;
}