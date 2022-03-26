#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int arr[100];
    int dem1 = 0;
    int dem2 = 0;
    int i, j;
    int s = 0;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("Nhap lai n: ");
    } while (n < 0 || n > 100);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        if (sqrt((float)arr[i]) == (int)sqrt((float)arr[i]))
        {
            dem1++;
            printf("%d ", arr[i]);
        }
    }
    printf("\ntong so chinh phuong la: %d", dem1);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                s += j;
            }

            if (arr[i] * 2 == s)
            {
                printf("%d ", arr[i]);
                dem2++;
            }
        }
        s = 0;
    }
    printf("\ntong so hoan hao: %d ", dem2);
    return 0;
}
