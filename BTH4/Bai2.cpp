#include <iostream>
#include<iomanip>
using namespace std;
class Printer
{
protected:
    float trongLuong;
    char hangSX[30];
    int namSX;
    int tocDo;
    friend void SuaNam(Printer &a);
};
class DotPrinter : public Printer
{
private:
    int matDoKim;

public:
    void nhap();
    void xuat();
};
class LaserPrinter : public Printer
{
private:
    int doPhanGiai;

public:
    void nhap();
    void xuat();
};

void DotPrinter::nhap(){
	cout<<"NHAP THONG TIN MAY IM KIM"<<endl;
	cout<<"Nhap trong luong: ";								cin>>trongLuong;
	cout<<"Nhap hang sx: ";				fflush(stdin);		gets(hangSX);
	cout<<"Nhap nam sx: ";									cin>>namSX;
	cout<<"Nhap toc do: ";									cin>>tocDo;
	cout<<"Nhap mat do kim:";								cin>>matDoKim;
}

void DotPrinter::xuat(){
	cout<<"\nTHONG TIN MAY IN KIM"<<endl;
	cout<<"Trong luong: "<<trongLuong<<endl;								
	cout<<"Hang sx: "<<hangSX<<endl;	
	cout<<"Nam sx: "<<namSX<<endl;
	cout<<"Toc do: "<<tocDo<<endl;
	cout<<"Mat do kim:"<<matDoKim<<endl;
}

void LaserPrinter::nhap(){
	cout<<"NHAP THONG TIN MAYS LASER"<<endl;
	cout<<"Nhap trong luong: ";								cin>>trongLuong;
	cout<<"Nhap hang sx: ";				fflush(stdin);		gets(hangSX);
	cout<<"Nhap nam sx: ";									cin>>namSX;
	cout<<"Nhap toc do: ";									cin>>tocDo;
	cout<<"Nhap do phan giai:";								cin>>doPhanGiai;
}

void LaserPrinter::xuat(){
	cout<<"\nTHONG TIN MAY LASER"<<endl;
	cout<<"Trong luong: "<<trongLuong<<endl;								
	cout<<"Hang sx: "<<hangSX<<endl;	
	cout<<"Nam sx: "<<namSX<<endl;
	cout<<"Toc do: "<<tocDo<<endl;
	cout<<"Do phan giai:"<<doPhanGiai<<endl;
}

void SuaNam(Printer &a){
	a.namSX=2020;
}

int main(){
	DotPrinter a;
	LaserPrinter b;
	a.nhap();
	b.nhap();
	
	a.xuat();
	b.xuat();
	
	cout<<"\nSAU KHI SUA NAM"<<endl;
	SuaNam(a);
	SuaNam(b);
	a.xuat();
	b.xuat();
	return 0;
}
