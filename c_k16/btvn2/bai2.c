#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    do
    {
        printf("Nhap vao so nguyen duong a: ");
        scanf("%f", &a);
        if (a < 2 || a > 50)
        {
            printf("Nhap sai, nhap lai\n");
        }
    } while (a < 2 || a > 50);
    b = pow(a / 3, 4);
    printf("%.3f", b);
    return 0;
}
