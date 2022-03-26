#include<iostream>
#include<math.h>
using namespace std;

void PhanA(int a[], int n, int res[], int *cnt) {
	for(int i=0; i<n; i++) {
		if(sqrt(a[i]) == (int)sqrt(a[i])) {
			res[*cnt] = a[i];
			*cnt += 1; //
		}
	}
}

void PhanB(int a[], int n, int res[], int *cnt) {
	for(int i=0; i<n; i++) {
		int s=0;
		for(int j=1; j<a[i]; j++) {
			if(a[i] % j == 0) {
				s += j;
			}
		}
		
		if(s != 0 && a[i] == s) {
			res[*cnt] = a[i];
			*cnt += 1;
		}
	}
}

void XuatMang(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n, a[100];
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> a[i];	
	}
	
	//a
	int cnt = 0;
	int res[100];
	PhanA(a, n, res, &cnt);
	
	//xuat kq
	cout << cnt << endl;
	XuatMang(res, cnt);
	
	//b
	printf("\n");
	int cnt2 = 0;
	int res2[100];
	
	PhanB(a, n, res2, &cnt2);
	
	cout << cnt2 << endl;
	XuatMang(res2, cnt2);

	return 0;
}
