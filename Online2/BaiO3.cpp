#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class TruongDH;
class Ban{
		char maBan[20];
		char tenBan[30];
		char ngayThanhLap[30];
	friend class TruongDH;
};

class Khoa{
		char maKhoa[20];
		char tenKhoa[30];
		char truongKhoa[30];
	friend class TruongDH;
	friend void xoa(TruongDH &a, char *MaKhoa);
};

class Truong{
	protected:
		char maTruong[20];
		char tenTruong[30];
		char diaChi[30];
	public:
		void nhap();
		void xuat();
};

class TruongDH:public Truong{
	private:
		Khoa *x;
		int n;
		Ban *y;
		int m;
	public:
		void nhap();
		void xuat();
	friend void xoa(TruongDH &a, char *MaKhoa);
};

void Truong::nhap(){
	cout<<"Nhap ma truong: ";		fflush(stdin);		gets(maTruong);
	cout<<"Nhap ten truong: ";		fflush(stdin);		gets(tenTruong);
	cout<<"Nhap dia chi truong: ";		fflush(stdin);		gets(diaChi);
}

void Truong::xuat(){
	cout<<"Ma truong: "<<maTruong<<endl;
	cout<<"Ten truong: "<<tenTruong<<endl;
	cout<<"Dia chi truong: "<<diaChi<<endl;
}

void TruongDH::nhap(){
	Truong::nhap();
	cout<<"Nhap so khoa: ";		cin>>n;
	x = new Khoa[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap ma khoa: ";			fflush(stdin);		gets(x[i].maKhoa);
		cout<<"Nhap ten khoa: ";		fflush(stdin);		gets(x[i].tenKhoa);
		cout<<"Nhap truong khoa: ";		fflush(stdin);		gets(x[i].truongKhoa);
	}
	
	cout<<"Nhap so ban: ";		cin>>m;
	y = new Ban[m];
	for(int i=0; i<m; i++){
		cout<<"Nhap ma ban: ";				fflush(stdin);		gets(y[i].maBan);
		cout<<"Nhap ten ban: ";				fflush(stdin);		gets(y[i].tenBan);
		cout<<"Nhap ngay thanh lap: ";		fflush(stdin);		gets(y[i].ngayThanhLap);
	}
}

void TruongDH::xuat(){
	Truong::xuat();
	cout<<"---------danh sach khoa-------------"<<endl;
	cout<<setw(30)<<"Ma khoa"<<setw(30)<<"Ten khoa"<<setw(30)<<"Truong khoa"<<endl;
	for(int i=0; i<n; i++){
		cout<<setw(30)<<x[i].maKhoa<<setw(30)<<x[i].tenKhoa<<setw(30)<<x[i].truongKhoa<<endl;
	}
	
	cout<<"---------danh sach ban-------------"<<endl;
	cout<<setw(30)<<"Ma ban"<<setw(30)<<"Ten ban"<<setw(30)<<"Ngay thanh lap"<<endl;
	for(int i=0; i<m; i++){
		cout<<setw(30)<<y[i].maBan<<setw(30)<<y[i].tenBan<<setw(30)<<y[i].ngayThanhLap<<endl;
	}
}

void xoa(TruongDH &a, char *MaKhoa){
	for(int i=0; i<a.n; i++){
		if(strcmpi(a.x[i].maKhoa, MaKhoa)==0){
			for(int j=i; j<a.n-1; j++){
				a.x[j] = a.x[j+1];
			}
			a.n--;
		}
	}
}

int main(){
	TruongDH dh;
	dh.nhap();
	cout<<"\nTHONG TIN DAI HOC"<<endl;
	dh.xuat();
	
	cout<<"\nTHONG TIN SAU SUA"<<endl;
	xoa(dh, "KH01");
	dh.xuat();
	return 0;
}
