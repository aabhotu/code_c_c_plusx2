#include <stdio.h>
int main()
{
    int student;
    int candies;
    int candy;
    scanf("%d", &student);
    scanf("%d", &candies);
    scanf("%d", &candy);
    if ((candies * candy) % student == 0)
        printf("No!\n");
    else
        printf("Yes!\n");
    return 0;
}