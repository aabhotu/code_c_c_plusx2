#include <stdio.h>

int checkYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int checkMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    case 2:
        if (checkYear(year))
            return 29;
        else
            return 28;
        break;
    default:
        printf("Invalid month\n");
        break;
    }
}

int main()
{
    int day, month, year;
    do
    {
        scanf("%d", &day);
        scanf("%d", &month);
        scanf("%d", &year);
    } while (day < 1 || day > 31 || month < 1 || month > 12 || year < 0);
    printf("%d", checkMonth(month, year));
    return 0;
}

// #include<stdio.h>
// int main(){
// 	int n, m;
// 	scanf("%d %d", &n, &m);
// 	if(n >= 0 && m >=1 && m <=13){
// 		if( (m <= 7 && m %2) || (m > 7 && m < 13 && m %2 == 0) )
// 			printf("31");
// 		else if (m == 2){
// 			if(n % 400 == 0 || (n % 4 == 0 && n % 100))
// 				printf("29");
// 			else
// 				printf("28");
// 		}
// 		else
// 			printf("30");
// 	}

// 	return 0;
// }