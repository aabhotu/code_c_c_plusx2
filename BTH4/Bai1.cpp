#include <iostream>
#include <iomanip>

using namespace std;
class Person{
	protected:
		char hoTen[30];
		char ngaySinh[20];
		char queQuan[30];
};

class KiSu : public Person{
	private:
		char nganh[20];
		int namTN;
	public:
		void nhap();
		void xuat();
	friend void Tim(KiSu *kiSu,int n);
};

void KiSu::nhap(){
	cout<<"Nhap ho ten: ";			fflush(stdin);			gets(hoTen);
	cout<<"Nhap ngay sinh: ";		fflush(stdin);			gets(ngaySinh);
	cout<<"Nhap quee quan: ";		fflush(stdin);			gets(queQuan);
	cout<<"Nhap nganh: 	";			fflush(stdin);			gets(nganh);
	cout<<"Nhap nam tot nghiep: ";							cin>>namTN;
}

void Tim(KiSu *kiSu,int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(kiSu[i].namTN>kiSu[j]).namTN{
				int temp = kiSu[i];
				kiSu[i] = kiSu[j];
				kiSu[j] = temp;
		}
	}
	cout<<"Ky su tot nghiep gan nhat: "<<kiSu[n-1]<<endl;
}

void KiSu::xuat(){
	cout<<setw(15)<<hoTen
		<<setw(15)<<ngaySinh
		<<setw(15)<<queQuan
		<<setw(15)<<nganh
		<<setw(10)<<namTN<<endl;
}

int main(){
	int n;
	cout<<"Nhap so luong ki su: ";			cin>>n;
	
	KiSu *kiSu = new KiSu[n];
	cout<<"NHAP THONG TIN"<<endl;
	for (int i=0; i<n; i++){
		kiSu[i].nhap();
	}
	
	cout<<"\nNHAP THONG TIN"<<endl;
	cout<<setw(15)<<"Hoten"
		<<setw(15)<<"Ngay sinh"
		<<setw(15)<<"Que quan"
		<<setw(15)<<"Nganh"
		<<setw(10)<<"Nam TN"<<endl;
	for (int i=0; i<n; i++){
		kiSu[i].xuat();
	}
	return 0;
}
