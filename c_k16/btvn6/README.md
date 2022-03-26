# Bài 1:

Tính giá trị biểu thức L:

- Với số nguyên n và số thực x nhập từ bàn phím
- Với n chẵn, L tính theo công thức (1)
- Với các trường hợp còn lại L tính theo công thức (2)

L =\
(1): |log~2~(x) + e^n^ 2021|\
(2): log~2~(x) +2021 +1/x + 3/x^2^ + 5/x^3^ + .... + (2n+1)/x^n^

- Input: 1 số nguyên n, 1 số thực x
- Output: kết quả của L (lấy 4 giá trị phần thập phân)

Test case

| Input  | Output     |
| ------ | ---------- |
| 4 1.5  | 2076.18312 |
| 5 10.2 | 2021.1323  |

# Bài 2:

(Yêu cầu dùng hàm để nhập và kiểm tra)\
Kiểm tra 1 số có bao nhiêu chữ số nguyên tố và in ra các chữ số đó\
Input: 1 số nguyên dương bất kỳ\
Output: - Dòng 1: số các chữ số là số nguyên tố - Dòng 2: các chữ số là số nguyên tố vừa tìm được\

Test case

| Input | Output |
| ----- | ------ |
| 97    | 1      |
|       | 7      |
| 5695  | 2      |
|       | 5 5    |

# Bài 3:

Sử dụng hàm nhập, xuất mảng n số nguyên gồm n phần tử (3<=n<=50)\
Đưa tất cả các giá tg giảm dần.\
Đưa tất cả các giá trị còn lại xuống cuối mảng và sắp âm lên đầu mảng và sắp xếp chúng tăng dần.\
Input: - Dòng 1: 1 số nguyên n thỏa mãn yêu cầu - Dòng 2: mảng gồm n số nguyên\
Output: mảng sau khi thực hiện yêu cầu\

Test case

| Input      | Output     |
| ---------- | ---------- |
| 4          |            |
| 9 -4 -32 4 | -4 -32 4 9 |
| 5          |            |
| 2 9 4 5 3  | 2 3 4 5 9  |
