# Bài 1(25):

Sử dụng hàm nhập, xuất mảng n số nguyên dương (0<n<100). Sau đó xóa các số đen đủi có trong mảng. Rồi sắp xếp theo chiều tăng dần

Số đen đủi là số chỉ chứa chữ số 4 hoặc chữ số 7 hoặc chứa cả hai chữ số 4 và 7 trong số đó( ví dụ 4,7,44,47, 447, 777, 77777.......)\
Input: - Dòng đầu là số lượng phần tử trong mảng - Dòng thứ hai là các phần tử trong mảng\
Output: - Một dòng duy nhất là mảng sau khi xóa các số đen đủi và đã được sắp xếp tăng dần\
Input\
5\
37 2 44 447 6 \
 Output 2 6 37

Input\
8\
4 44 5 4474 2 43 6 24 \
Output 2 5 6 24 43

    Giải thích: Test case 2: Mảng chứa các số đen đủi là 4 44 4474 thì xóa hết các số này. rồi sắp xếp lại mảng vừa xóa

# Bài 2(50):

Sử dụng hàm nhập, xuất mảng n số nguyên (0<n<100)\
a)(25) Nhập số nguyên x, chèn x vào sau vị trí của số âm đầu tiên trong mảng, nếu không có số âm thì chèn vào cuối mảng\
Input: - Dòng đầu là số lượng phần tử trong mảng - Dòng thứ hai là các phần tử trong mảng - Dòng thứ ba là số nguyên x cần chèn\
Output: Một dòng duy là nhất là mảng sau khi chèn x

Input \
6\
1 4 -5 9 -8 7 \
3\
Output 1 4 -5 3 9 -8 7

Input\
6\
2 5 4 9 6 7 \
3\
Output 2 5 4 9 6 7 3

Giải thích:\
+) Test case 1: số nguyên x có giá trị là 3 được chèn sau vị trí của -5( giá trị âm đầu tiên của mảng)\
+) Test case 2: Mảng không có số âm => chèn 3 vào vị trí cuối cùng của mảng\
b)(25) Sắp xếp mảng vừa chèn thêm sao cho phần tử lớn nhất ở đầu mảng, phần tử bé nhất ở cuối mảng, các phần tử còn lại sắp xếp tăng dần. In mảng đã sắp ra màn hình.\
Input: (lấy mảng vừa chèn ở trên làm input)\
Output: Một dòng duy là nhất là mảng sau khi sắp xếp lại mảng vừa chèn ở trên theo yêu cầu

Input \
7\
1 4 -5 3 9 -8 7 \
Output 9 -5 1 3 4 7 -8

Giải thích: phần tử lớn nhất của mảng là 9 , bé nhất của mảng là -8, đưa 9 lên trên đầu, -8 xuống cuối và các phần tử khác sắp xếp tăng dần

# Bài 3(25):

Sử dụng hàm nhập, xuất mảng n số nguyên dương gồm n phần tử (2<n<=50). Sửa số tất cả số may mắn trong mảng thành giá trị -1

(số may mắn là số có tổng các chữ số của số đó là một số nguyên tố)\
VD: 12 là số may mắn do tổng các chữ số của số 12 là 1+2=3 mà 3 là số nguyên số,

Input \
5\
9 5 15 29 26 \
Output 9 -1 15 -1 26

Giải thích\
Input:\
Dòng đầu là số lượng phần tử trong mảng\
Dòng thứ hai là các phần tử trong mảng\
Output:\
Mảng mới: 9 -1 15 -1 26\
Số 5 , 29 là những số may mắn do tổng các chữ số là một số nguyên tố nên ta sửa thành -1
