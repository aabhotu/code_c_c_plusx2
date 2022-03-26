#include <stdio.h>
int main()
{
    int i, j;
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n > 10)
            printf("Nhap lai: ");
    } while (n > 10);
    for (i = 1; i <= 10; i++)
    {

        printf("%d * %d = %2d\n", n, i, n * i);
    }
    return 0;
}
