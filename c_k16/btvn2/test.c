#include <stdio.h>
int main()
{
    int a;
    for (; a < 2 || a > 50;)
    {
        scanf("%d", &a);
    }
    printf("%d", a);
    return 0;
}