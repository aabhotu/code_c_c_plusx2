# Bài 1:(25đ)

Nhập vào một mảng a gồm n số nguyên (n>0 && n<100). Kiểm tra xem mảng đang là mảng giảm dần hay tăng dần. In ra “YES” nếu mảng là mảng tăng dần, in ra “NO” nếu mảng là mảng giảm dần. Nếu không tăng không giảm thì in ra -1\
Input:\

- Dòng thứ nhất là số lượng phần tử trong mảng\
- Dòng thứ 2 là các phần tử trong mảng\
  Output: In ra đáp án theo yêu cầu của đề bài\
  **Note: tăng dần và giảm dần thì đều hiểu là tăng hay giảm 1 hoặc nhiều đơn vị**
  Input Output\
  4\
  1 2 3 4 YES\
  5\
  7 6 5 4 3 NO\
  4\
  1 7 4 9 -1\

# Bài 2:

(20đ) Nhập vào một mảng gồm n số thực(n>0 && n<100). Sắp xếp các số âm theo chiều giảm dần, các số khác thì đứng yên. In mảng đã sắp xếp ra màn hình.\

Input \
6\
-4 3 6.7 -1 0 1.3\
Output\
 -1 3 6.7 -4 0 1.3\

có 2 số âm là -4 và -1, thay đổi vị trí 2 số để thỏa mãn âm theo chiều giảm dần, các số khác không thay đổi.

# Bài 3:

(20đ) Nhập vào một mảng gồm n số nguyên (n>0 && n<100).
a. Đếm và in ra các số chính phương trong mảng. Các số chính phương là các số căn bậc 2 của nó là số nguyên.\
b. Đếm và in ra các số hoàn hảo trong mảng. Số hoàn hảo là số mà tổng các ước bằng 2 lần chính nó.\

Input \
5 \
2 3 4 5 6 \
Output\
1\
4\
Input\
5 \
1 2 6 28 \
Output\
2\
6 28\

    - test 1: căn bậc 2 của 4 là 2 (số nguyên) -> 4 là số chính phương\
    - test 2: 6 có ước là 1 2 3 6, tổng các ước là 12 = 2*6 -> 6 là số hoàn hảo. Tương tự với số 28.\

# Bài 4:

(15đ) Nhập vào một mảng gồm n số thực (n>0 && n<100). In ra các vị trí mà giá trị tại đó là lớn nhất trong mảng.\

Input \
6\
1.4 5 4 2.6 3 5 \
Output 2 6

# Bài 5:

(20đ) Nhập vào một mảng gồm n số dương n (n>0 && n<100). Tìm các số nguyên tố có trong mảng, tính tổng các số nguyên tố đó. Biết số nguyên tố là số có 2 ước là 1 và chính nó.\

Input \
5 \
2 3 4 5 6 \
Output\
2 3 5\
10\

    2 có ước là 1 và 2 -> 2 là số nguyên tố. Tương tự 3 và 5.
