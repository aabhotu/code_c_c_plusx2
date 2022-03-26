#include <stdio.h>
int main()
{
    int arr[100];
    int i, j, n;
    int up, down;
    up = down = 0;
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
    if (n == 1)
        printf("-1");
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] > arr[i])
                up++;
            else if (arr[i + 1] < arr[i])
                down++;
            else
                break;
        }
        if (up == n - 1)
            printf("YES");
        else if (down == n - 1)
            printf("NO");
        else
            printf("-1");
    }
    return 0;
}