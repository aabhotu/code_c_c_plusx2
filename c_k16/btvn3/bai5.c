#include <stdio.h>
int main()
{
    int n, i;
    int tongA, tongB, tongC;
    tongA = 0;
    tongB = tongC = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0 || n >= 100)
            printf("Nhap lai: ");
    } while (n <= 0 || n >= 100);
    for (i = 1; i <= n; i++)
    {
        tongA += i;
        tongB += 2 * i;
        tongC += 2 * i + 1;
    }
    printf("Tong A: %d\n", tongA);
    printf("Tong B: %d\n", tongB + 1);
    printf("Tong C: %d\n", tongC + 1);
    return 0;
}