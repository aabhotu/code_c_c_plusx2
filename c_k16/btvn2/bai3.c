// Hùng hay còn được biết đến với cái tên chú bé quá đần, một hôm trên đường
// đến công ty, chú thấy một hàng bán hoa, thấy đẹp quá liền quyết định mua một số
// bông hoa. Sau một hồi suy đi tính lại chú mua n bông hoa. Biết rằng mỗi bông hoa
// có giá m đồng. Nếu mua lẻ bông và số bông lớn hơn 5 thì sẽ được giảm 20% tổng
// giá tiền, còn nếu mua chẵn bông và mua  lớn hơn 4 bông thì sẽ được giảm 15%
// tổng giá tiền.
// Input: 2 số n, m (1 ≤ n ≤ 999; 7,000 ≤ m ≤ 200,000 và m chia hết cho 100)
// Ouput: 1 số duy nhất: là số tiền Hùng phải trả
#include <stdio.h>
#include <math.h>
int main()
{
    int flower;
    int price;
    int prices = 0;
    do
    {
        // printf("Enter the number of flowers: ");
        scanf("%d", &flower);
        if (flower < 1 || flower > 999)
        {
            printf("Nhap sai: ");
        }
    } while (flower < 1 || flower > 999);
    do
    {
        //printf("Enter the price of a flower: ");
        scanf("%d", &price);
        if (price < 7000 || price > 20000 || price % 100 != 0)
            printf("Nhap sai: ");
    } while (price < 7000 || price > 20000 || price % 100 != 0);

    if (flower % 2 != 0 && flower > 5)
        prices = price * flower * 0.8;
    else if (flower % 2 == 0 && flower > 4)
        prices = price * flower * 0.85;
    else
        prices = price * flower;
    printf("%d", prices);
    return 0;
}