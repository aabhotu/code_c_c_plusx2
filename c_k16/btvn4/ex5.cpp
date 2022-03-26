#include<stdio.h>

//Kieu_Du_Lieu_Tra_Ve   Ten_Ham (Danh sách doi so) {
	//code
//}

/*
	- Khong tra ve gia tri: void
	- Tra ve gia tri 	  : int, long, float, double, char, byte

*/

void NhapMang(int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ", a[i]);
	}
}

int Sum(int a, int b) {
//	int s = a + b;
//	return s;
	
	return a + b;
}

void ShowInfo() {
	printf("\nNguyen Dinh Huan");
}

void Show(int *a) {
	printf("\na trong ham truoc khi thay doi gia tri = %d", *a);
	*a = 5;
	printf("\na trong ham sau khi thay doi gia tri = %d", *a);
}


/*
- Con tro: int *a;  them dau * truoc ten bien
- Tham tri: 
	+) truyen gia tri vao trong ham
	+) khong lam thay doi gia tri cua bien truyen vao ham day
- Tham chieu: 
	+) truyen dia chi o nho: toan tu &
	+) Lam thay doi gia tri cua bien truyen vao
	+) Doi so cua ham la con tro: *
	+) Truy xuat hay thay doi gia tri con tro thi dung toan tu *
*/

int main() {
//	int n, a[100];
//	scanf("%d", &n);
//	
//	NhapMang(a, n);
//	
//	XuatMang(a, n);
	
//	int s = Sum(2, 5);
	
//	printf("%d", Sum(2, 5));
//	ShowInfo();

	int a = 10;
	printf("\na truoc khi goi ham = %d", a);
	Show(&a);
	printf("\na sau khi goi ham = %d", a);
	
	return 0;
}
