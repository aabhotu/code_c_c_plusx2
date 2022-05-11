#include <iostream>
using namespace std;
bool check(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}
int main()
{
    cout << check(2, 3);
    return 0;
}
