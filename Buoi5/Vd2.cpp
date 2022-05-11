/*
    Một bình chứa hình hộp chữ nhật với các thuộc tính chiều dài, chiều rộng và chiều cao
    Hãy cài đặt lớp BINHCHUA (bình chứa) với các thuộc tính nêu trên và:
    - Phương thức khởi tạo: có đối và không đối để khỏi gán giá trị cho các thuộc tính
    - Hàm toán tử nhập/ xuất thông tin của một bình chứa độc lập thiết bị
    - Phương thức toán tử trả về giá trị true nếu hai bình chứa có thể tích bằng nhau, ngược lại trả về false
    - Phương thức toán tử trẻ về true nếu một bình chứa là hình lập phương (các độ đao dài, rộng, cao đều bằng nhau), ngược lại trả về false
    Hàm main: Sử dụng các phương thức/ toán tử ở trên để nhập vào thông tin của hai bình chứa. Kiểm tra xem hai bình chứa đó có diện tích bằng nhau hay không và có bình nào là hình lập phương hay không. Toàn bộ kết quả được xuất ra màn hình và vào tệp.
*/

#include <iostream>
using namespace std;
class BinhChua
{
private:
    float chieuRong, chieuDai, chieuCao;

public:
    BinhChua()
    {
        chieuRong = chieuDai = chieuCao = 0;
    }

    BinhChua(float a, float b, float c)
    {
        chieuRong = a;
        chieuDai = b;
        chieuCao = c;
    }

    friend istream &operator>>(istream &in, BinhChua &a);
    friend ostream &operator<<(ostream &out, BinhChua a);
    // friend bool checkTheTich(BinhChua b, BinhChua a);
    bool operator+(BinhChua a);
    // BinhChua operator+(BinhChua a);
    // friend bool checkHLP(BinhChua a);
    bool operator-();
};

istream &operator>>(istream &in, BinhChua &a)
{
    cout << "Nhap chieu dai: ";
    in >> a.chieuDai;
    cout << "Nhap chieu rong: ";
    in >> a.chieuRong;
    cout << "Nhap chieu cao: ";
    in >> a.chieuCao;
    return in;
}

ostream &operator<<(ostream &out, BinhChua a)
{
    out << "Chieu dai: " << a.chieuDai << endl;
    out << "Chieu rong: " << a.chieuRong << endl;
    out << "Chieu cao: " << a.chieuCao << endl;
    return out;
}

bool BinhChua::operator+(BinhChua a)
{
    if (chieuDai * chieuRong * chieuCao == a.chieuDai * a.chieuRong * a.chieuCao)
        return true;
    else
        return false;
}
bool BinhChua::operator-()
{
    if ((chieuDai == chieuRong) && (chieuRong == chieuCao))
        return true;
    else
        return false;
}

int main()
{
    BinhChua a, b;
    cout << "Nhap thong tin binh chua a: " << endl;
    cin >> a;
    cout << "Nhap thong tin binh chua b: " << endl;
    cin >> b;
    (a + b) ? printf("a, b bang nhau") : printf("a, b khong bang nhau");
    -(a) ? printf("\na la hinh lap phuong") : printf("\na ko la hinh lap phuong");
    -(b) ? printf("\nb la hinh lap phuong") : printf("\nb ko la hinh lap phuong");
    return 0;
}