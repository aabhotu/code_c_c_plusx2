#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("\nDa du tuoi di tu") : printf("\nCh du tuoi di tu");
    return 0;
}