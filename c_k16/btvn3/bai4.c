#include <stdio.h>
int main()
{
    int n;
    int giaithua = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        giaithua *= i;
    }
    printf("%d", giaithua);
    return 0;
}