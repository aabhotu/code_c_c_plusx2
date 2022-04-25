#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class BenhNhan;
class Nguoi{
	protected:
		char hoTen[30];
		int tuoi;
	public:
		void nhap();
		void xuat();
	
};

class BenhVien{
	private:
		char tenBenhVien[30], diaChi[30];
		Nguoi giamDoc;
	friend class BenhNhan;
};

class BenhNhan:public Nguoi{
	private:
		char maBN[20];
		char tienSu[30];
		char chanDoan[30];
		BenhVien bv;
	public:
		void nhap();
		void xuat();
	friend int Bonus1(BenhNhan *a, int n);
	friend void Bonus2(BenhNhan *a, int n, char *ma);
};

void Nguoi::nhap(){
	cout<<"Nhap hoc ten: ";			fflush(stdin);		gets(hoTen);
	cout<<"Nhap tuoi: ";								cin>>tuoi;
}

void Nguoi::xuat(){
	cout<<setw(20)<<hoTen<<setw(10)<<tuoi;
}

void BenhNhan::nhap(){
	Nguoi::nhap();
	cout<<"Nhap ma benh nhan: ";			fflush(stdin);		gets(maBN);
	cout<<"Nhap tien su benh nhan: ";		fflush(stdin);		gets(tienSu);
	cout<<"Nhap chan doan benh nhan: ";		fflush(stdin);		gets(chanDoan);
	cout<<"Nhap ten benh vien: ";			fflush(stdin);		gets(bv.tenBenhVien);
	cout<<"Nhap dia chi: ";					fflush(stdin);		gets(bv.diaChi);
	cout<<"Nhap giam doc: ";				bv.giamDoc.nhap();
}

void BenhNhan::xuat(){
	Nguoi::xuat();
	cout<<setw(15)<<maBN<<setw(20)<<tienSu<<setw(20)<<chanDoan<<setw(20)<<bv.tenBenhVien<<setw(20)<<bv.diaChi;
	bv.giamDoc.xuat();
	cout<<endl;
}

int Bonus1(BenhNhan *a, int n){
	int count =0;
	for(int i=0; i<n;i++){
		if(a[i].tuoi>30)
			count++;
	}
	return count;
}

void Bonus2(BenhNhan *a, int n, char *ma){
	for(int i=0; i<n; i++){
		if(stricmp(a[i].maBN, ma) ==0 )
			a[i].tuoi=20;
	}
}

int main(){
	int n;
	cout<<"Nhap so benh nha: "; 	cin>>n;
	BenhNhan *a = new BenhNhan[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin benh nhan thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\nTHONG ITN BENH NHAN"<<endl;
	cout<<setw(20)<<"Ten BN"<<setw(10)<<"Tuoi"
		<<setw(15)<<"MA BN"<<setw(20)<<"Tien su"<<setw(20)<<"Chan doan"
		<<setw(20)<<"Ten BV"<<setw(20)<<"Dia chi"<<setw(20)<<"Ten gd"
		<<setw(10)<<"Tuoi gd"<<endl;
	for(int i=0; i<n;i++){
		a[i].xuat();
	}
	
	cout<<"\nCo "<< Bonus1(a,n)<<" benh nha tren 30t"<<endl;
	
	Bonus2(a, n, "BN01");
	cout<<"\nTHONG TIN N BENH NHAN SAU KHI SUA"<<endl;
	for(int i=0; i<n; i++)
		a[i].xuat();
	return 0;
}
