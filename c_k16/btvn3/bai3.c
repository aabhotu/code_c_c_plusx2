#include <stdio.h>
int main()
{
    int i;
    do
    {
        scanf("%d", &i);
        if (i > 0)
            printf("Nhap lai: ");
    } while (i > 0);

    //  while (n >= 0){
    //     printf("Nhap vao mot so : ");
    //     scanf("%d", &n);
    // }
    return 0;
}