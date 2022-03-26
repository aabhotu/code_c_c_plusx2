#include <stdio.h>
int main()
{
    float arr[100];
    int n;
    int temp;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] < 0 && arr[j] < 0 && arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.1f ", arr[i]);
    }
    return 0;
}