# Bài 1:(40đ) Tính biểu thức

- Viết hàm nhập vào lần lượt số thực x và số nguyên n. ( n >=0)
- Viết hàm trả về giá trị của biểu thức của L biết: - Nếu n lẻ thì L tính theo công thức (2) - Với các trường hợp còn lại L tính theo công thứ (1)\
  L(x,n) =

  (1): 2021 + (x+2)/1! + (x^2+4)/2! + (x^3+6)/3! +..... +(x^n+2n)/n!\

  (2): 2022 + (x+2)/1 + (x^2+4)/(1+2) + (x^3+6)/(1+2+3) +....+(x^n+2n)/(1+2+3+...+n)

Input : 1 dòng lần lượt là số thực x và số nguyên n (n>=0).\
Output : Đầu ra lấy đến 4 chữ số thập phân sau dấu chấm. Chấp nhận sai số nhỏ !

| Input  | Output      |
| ------ | ----------- |
| 4.5 4  | 2073.2317   |
| Key1   |             |
| 10.5 6 | 5716.2686   |
| Key2   |             |
| 10.5 7 | 578343.0625 |

Do dùng hàm có sẵn hoặc tự viết nên Sai số sau dấu , nhỏ có thể coi như đúng

Gợi ý : Đơn giản bài toán cần viết các hàm tính giai thừa, lũy thừa, tính tổng cấp số cộng cho cho mẫu nếu cần thiết.\
Viết giai thừa có thể để trong for chung đỡ viết hàm nhé :v

# Bài 2(60đ): Xử lý mảng

Viết hàm nhập vào mảng a gồm n số nguyên .(1<= n < 100)\
Viết hàm nhập vào 1 số nguyên x bất kì sau đó chèn x vào sau tất cả các số nguyên tố nhỏ hơn 10. (1)\
Viết hàm xóa tất cả các số chia hết cho 3 nhưng không chia hết cho 5. (2)\
Viết hàm xóa các phần tử trùng lặp sao cho mỗi số chỉ xuất hiện trong mảng 1 lần . (3)\

Input: - Dòng đầu là số lượng phần tử trong mảng - Dòng thứ hai là các phần tử trong mảng - Dòng thứ 3 là số nguyên x.

Output :\
In ra 3 dòng lần lượt là các là các phần tử của mảng a sau khi đã xử lí qua 3 hàm trên.

Note : Hàm 3 quy định ưu tiên xóa các số trùng ở phía sau .( a = {1 4 5 4} , Sẽ xóa thành a = {1 4 5}, Không xóa thành a = {1 5 4}.

| Test  | Input           | Output              |
| ----- | --------------- | ------------------- |
| 1     | 4               | 1 2 10 4 3 10       |
|       | 1 2 4 3         | 1 2 10 4 10         |
|       | 10              | 1 2 10 4            |
| 2     | 7               | 7 8 4 9 7 8 8 30 21 |
|       | 7 4 9 7 8 30 21 | 7 8 4 7 8 8 30      |
|       | 8               | 7 8 4 30            |
| Key 1 | 5               | 21 21 28 3 3 5 3    |
|       | 21 21 28 3 5    | 28 5                |
|       | 10              | 28 5                |
| Key 2 | 3               | 11 7 0 1            |
|       | 11 7 1          | 11 7 0 1            |
|       | 0               | 11 7 0 1            |
| Key 3 | 5               | 7 7 7 7 5 7 7 7 7 7 |
|       | 7 7 5 7 7       | 7 7 7 7 5 7 7 7 7 7 |
|       | 7               | 7 5                 |

-Hàm (1) cần chú ý chèn x nếu x là số nguyên tố ? , chỉ chèn sau các số nguyên tố nhỏ hơn 10\
-Hàm (2) ,(3) cần chú ý xóa trong TH có 2 số thỏa mãn xóa đứng liền kề nhau
-Hàm (3) Thứ tự xóa phải đúng

Giải thích:

- Test 1 : Input n = 4, a = {1 2 4 3} , x = 10
- Sau khi qua hàm (1) mảng a có 2 phần tử là 2 , 3 là số nguyên tố thỏa mãn . → cần chèn 10 vào sau 2 số này . mảng a lúc này a={1 2 10 4 3 10}
- Sau khi qua hàm (2) mảng a có 1 phần tử là 3 thỏa mãn chia hết cho 3 nhưng không chia hết cho 5 . → xóa phần tử 3 . Mảng a lúc này a={1 2 10 4 10}
- Sau khi qua hàm (3) mảng a có phần 2 phần tử trùng nhau là 2 số 10 . Do vậy cần xóa 1 số 10 → Mảng a lúc này a = {1 2 10 4}
