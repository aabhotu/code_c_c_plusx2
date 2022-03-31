#include <iomanip>
#include <iostream>
using namespace std;
class date
{
private:
    int day, month, year;

public:
    void input();
    void output();
};
class student
{
private:
    char name[30];
    char sex[6];
    date birth;
    float dtb;

public:
    void input();
    void output();
};
void date::input()
{
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
}
void date::output()
{
    cout << "ngay sinh: " << day << "/" << month << "/" << year << endl;
}
void student::input()
{
    cout << "Name: ";
    fflush(stdin);
    gets(name);
    cout << "Gioi tinh: ";
    fflush(stdin);
    gets(sex);
    birth.input();
    cout << "Diem trung binh: ";
    cin >> dtb;
}
void student::output()
{
    cout << "ho ten: " << name << endl;
    birth.output();
    cout << "gioi tinh: " << sex << endl;
    cout << "diem tb: " << dtb << endl;
}
int main()
{
    student st1;
    st1.input();
    cout << "THONG TIN HOC SINH" << endl;
    st1.output();
    return 0;
}