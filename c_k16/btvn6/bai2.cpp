#include <iostream>
using namespace std;
bool check(int n)
{
    if (n < 2)
        return false;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int n;
    int count = 0;
    cin >> n;
    while (n > 0)
    {
        int temp = n % 10;
        if (check(temp))
        {
            count++;
            cout << temp << " ";
        }
        n /= 10;
    }
    cout << endl
         << count;
    return 0;
}