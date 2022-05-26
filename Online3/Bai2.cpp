#include <iostream>
#include <fstream>

using namespace std;

class TamGiac{
	private:
		float a, b, c;
	public:
		float operator++();
		friend istream &operator>>(istream &in, TamGiac &x);
		friend ostream &operator<<(ostream &out, TamGiac x);
		friend WriteToFile(char	*fileName, TamGiac x);
};

float TamGiac::operator++(){
	return this->a+this->b+this->c;
}

istream &operator>>(istream &in, TamGiac &x){
	cout<<"Nhap canh a: ";		in>>x.a;
	cout<<"Nhap canh b: ";		in>>x.b;
	cout<<"Nhap canh c: ";		in>>x.c;
	return in;
}

ostream &operator<<(ostream &out, TamGiac x){
	out<<"a= "<<x.a<<endl;
	out<<"b= "<<x.b<<endl;
	out<<"c= "<<x.c<<endl;
	out<<"Chu vi: "<<++x<<endl;
	return out;
}

WriteToFile(char *fileName, TamGiac x){
	ofstream f(fileName, ios::app);
	f<<x<<endl;
	f.close();
}

int main(){
	TamGiac P;
	TamGiac Q;
	cout<<"Nhap tam giac P: ";		cin>>P;
	cout<<"Nhap tam giac Q: ";		cin>>Q;
	WriteToFile("tep1.txt", P);
	WriteToFile("tep2.txt", Q);
	return 0;
}
