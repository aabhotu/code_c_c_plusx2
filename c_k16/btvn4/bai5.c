#include <stdio.h>
int check(int n)
{
    int i;
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
    {
        for (i = 3; i <= n; i += 2)
            if (n % i == 0)
                break;
        if (i == n)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int n;
    int sum = 0;
    int arr[100];
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("Nhap lai n: ");
    } while (n < 0 || n > 100);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        if (check(arr[i]) == 1)
            sum += arr[i];
    printf("sum: %d", sum);
    return 0;
}