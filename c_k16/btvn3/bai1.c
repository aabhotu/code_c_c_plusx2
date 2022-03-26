#include <stdio.h>
int main()
{
    int i, j, k;
    i = j = k = 100;
    for (i = 100; i > 0; i--)
    {
        printf("%3d", i);
    }
    printf("\n");
    while (j > 0)
    {
        printf("%3d", j);
        j--;
    }
    printf("\n");
    do
    {
        printf("%3d", k);
        k--;
    } while (k > 0);
    return 0;
}