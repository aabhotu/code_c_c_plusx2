#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Student;
class School{
	private:
		char name[30];
		char date[30];
	friend class Faculty;
	friend void sua(Student &a);
};

class Faculty{
	private:
		char name[30];
		char date[30];
		School x;
	public:
		void input();
		void output();
	friend void sua(Student &a);
	friend class Student;
};

class Person{
	protected:
		char name[30];
		char birth[30];
		char address[30];
	public:
		void input();
		void output();
		Person();
};

class Student:public Person{
	private:
		Faculty y;
		char Class[20];
		float score;
	public:
		void input();
		void output();
	Student();
	friend void sua(Student &a);
};

void Faculty::input(){
	cout<<"Nhap ten thiet bi: ";				fflush(stdin);		gets(name);
	cout<<"Nhap ngay cua thiet bi: ";			fflush(stdin);		gets(date);
	cout<<"Nhap ten truong: ";					fflush(stdin);		gets(x.name);
	cout<<"Nhap ngay cua truong: ";				fflush(stdin);		gets(x.date);
}

void Faculty::output(){
	cout<<"Ten thiet bi: "<<name<<endl;
	cout<<"Ngay cua thiet bi: "<<date<<endl;
	cout<<"Ten truong: "<<x.name<<endl;
	cout<<"Ngay cua truong: "<<x.date<<endl;
}

void Person::input(){
	cout<<"Nhap ten nguoi: ";		fflush(stdin);		gets(name);
	cout<<"Nhap ngay sinh: ";		fflush(stdin);		gets(birth);
	cout<<"Nhap dia chi: ";			fflush(stdin);		gets(address);
}

void Person::output(){
	cout<<"Ten: "<<name<<endl;
	cout<<"Ngay sinh: "<<birth<<endl;
	cout<<"Dia chi: "<<address<<endl;
}

Person::Person(){
	strcpy(name, "");
	strcpy(birth, "");
	strcpy(address, "");
}

void Student::input(){
	Person::input();
	y.input();
	cout<<"Nhap lop: ";		fflush(stdin);		gets(Class);
	cout<<"Nhap diem: ";	cin>>score;
}

void Student::output(){
	Person::output();
	y.output();
	cout<<"Lop: "<<Class<<endl;
	cout<<"Diem: "<<score<<endl;
}

Student::Student(){
	strcpy(Class,"");
	score = 0;
}

void sua(Student &a){
	strcpy(a.y.x.name, "DHCNHN");
}

int main(){
	Student a;
	a.input();
	cout<<"\nTHONG TIN SINH VIEN"<<endl;
	a.output();
	cout<<"\nTHONG TIN SAU KHI SUA"<<endl;
	sua(a);
	a.output();
	return 0;
}
