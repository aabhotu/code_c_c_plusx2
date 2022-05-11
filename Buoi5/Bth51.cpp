#include<iostream>
using namespace std;

class PhanSo{
	private:
		int ts, ms;
	public:
		friend istream& operator>>(istream &in, PhanSo &a);
		friend ostream& operator<<(ostream &out, PhanSo a);
		PhanSo operator+ (PhanSo b);
		float operator !();
};

istream& operator>>(istream& in, PhanSo &a){
	cout<<"Nhap tu so: "; 	in>>a.ts;
	cout<<"Nhap mau so: ";	in>>a.ms;
	return in;
}

ostream& operator<<(ostream& out, PhanSo a){
	out<<a.ts<<"/"<<a.ms<<endl;
	return out;
}

//! <Kiểu trả về><tên lớp>::operator<tên toán tử><[danh sách tham số]>

PhanSo PhanSo::operator+(PhanSo b){
	PhanSo kq;
	kq.ts = ts*b.ms + ms*b.ts; 
	kq.ms = ms*b.ms;
	return kq;
}

float PhanSo::operator !(){
	return (float)ts/ms;
}

int main(){
	PhanSo a,b;
	cout<<"Nhap phan so a: "<<endl; cin>>a;
	cout<<"\nNhap phan so b: "<<endl; cin>>b;
	cout<<"Phan so a co dang: "<<a;
	cout<<"Phan so b co dang: "<<b;
	cout<<"Cong hai phan so: "<<a+b;
	cout<<"Rut gon ham toan tu cong 2ps: "<<!(a+b);
	return 0;
}
