#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float arr[100];
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("Nhap lai n: ");
    } while (n < 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            printf("%d ", i);
        }
    }
    return 0;
}