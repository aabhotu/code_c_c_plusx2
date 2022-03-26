#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("%3d", i);
        if (i > 0 && i % 10 == 9)
            printf("\n");
    }
    return 0;
}