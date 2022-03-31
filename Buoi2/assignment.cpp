#include<iostream>
#include<iomanip>

using namespace std;

class Phieu;

class SanPham {
	private: 
		char maSP[10];
		char tenSP[30];
		int soLuong;
		int donGia;
	public:
		void nhap();
		void xuat();
		friend class Phieu; //Lop ban: Phieu la ban cua san pham (cap quyen cho truy cap toi thuoc tinh private)
		//Luc nay: phieu co the truy cap thuoc tinh private cua san pham
		// SanPham lai khong the truy cap den Phieu
		friend int demSanPham(Phieu x, int soLuong); //demSanPham truy cap vao thuoc tinh soLuong -> ham ban
		friend void sapXep(Phieu &x);
};

class NhaCungCap {
	private:
		char maNCC[10];
		char tenNCC[30];
		char diaChi[30];
		char sdt[15];
	public:
		void nhap();
		void xuat();
};

class Phieu {
	private: 
		char maPhieu[10];
		char ngayLap[15];
		NhaCungCap ncc;
		int n;
		SanPham *sanPhams;
	public:
		void nhap();
		void xuat();
		//Khai bao ham ban: (Cap quyen cho ham denSanPham duoc truy cap vao thuoc tinh private)
		friend int demSanPham(Phieu x, int soLuong); //demSanPham truy cap vao thuoc tinh n, sanPhams -> ham ban
		friend void sapXep(Phieu &x);
};

void SanPham::nhap() {
	cout << "Nhap ma SP: "; fflush(stdin); gets(maSP);
	cout << "Nhap ten SP: "; fflush(stdin); gets(tenSP);
	cout << "Nhap so luong: "; cin >> soLuong;
	cout << "Nhap don gia: "; cin >> donGia; 
}

void SanPham::xuat() {
	cout << left << setw(10) << maSP << setw(20) << tenSP << setw(15) 
		 << soLuong << setw(15) << donGia << setw(15) << soLuong * donGia << endl;
}

void NhaCungCap::nhap() {
	cout << "Nhap ma NCC: "; fflush(stdin); gets(maNCC);
	cout << "Nhap ten NCC: "; fflush(stdin); gets(tenNCC);
	cout << "Nhap dia chi: "; fflush(stdin); gets(diaChi);
	cout << "Nhap SDT: "; fflush(stdin); gets(sdt);
}

void NhaCungCap::xuat() {
	cout << left << setw(20) << "Ma nha cung cap: " << setw(15) << maNCC << setw(20) << "Ten nha cung cap: " << tenNCC << endl;
	cout << left << setw(20) << "Dia chi: " << setw(15) << diaChi << setw(20) << "So dien thoai: " << tenNCC << endl;
}

void Phieu::nhap() {
	cout << "Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout << "Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
	ncc.nhap();
	cout << "Nhap so luong san pham: "; cin >> n;
	//Cap phat bo nho dong
	sanPhams = new SanPham[n];
	for(int i=0; i<n; i++) {
		cout << "\tNhap san pham thu " << i + 1 << endl;
		sanPhams[i].nhap();
	}
}

void Phieu::xuat() {
	cout << "\nDai hoc Vitory" << endl;
	cout << "\t\t\tPHIEU NHAP VAN PHONG PHAM" << endl;
	ncc.xuat();
	
	int tong = 0;
	cout << left << setw(10) << "Ma SP" << setw(20) << "Ten SP" << setw(15) 
		 << "So luong" << setw(15) << "Don gia" << setw(15) << "Thanh tien" << endl;
	for(int i=0; i<n; i++) {
		tong += sanPhams[i].soLuong * sanPhams[i].donGia;
		sanPhams[i].xuat();
	}
	
	cout << left << setw(60) << "TONG" << tong << endl;
	cout << "\tHieu truong \tPhong tai chinh \tNguoi lap" << endl;  
}

//truyen vao phieu bat ki
//function -> Phieu: friend
//function -> SanPham: friend
int demSanPham(Phieu x, int soLuong) {
	int cnt = 0;
	
	for(int i=0; i<x.n; i++) {
		if(x.sanPhams[i].soLuong < soLuong) {
			cnt++;
		}
	}
	
	return cnt;
}

void sapXep(Phieu &x) {
	for(int i=0; i<x.n-1; i++) {
		for(int j=i+1; j<x.n; j++) {
			if(x.sanPhams[i].donGia > x.sanPhams[j].donGia) {
				SanPham temp = x.sanPhams[i];
				x.sanPhams[i] = x.sanPhams[j];
				x.sanPhams[j] = temp;
			}
		}
	}
}

int main() {
	Phieu phieu;
	
	phieu.nhap();
	
	phieu.xuat();
	
	cout << "\nCo " << demSanPham(phieu, 80) << " san pham so luong < 80" << endl;
	
	sapXep(phieu);
	
	phieu.xuat();
	
	return 0;
}