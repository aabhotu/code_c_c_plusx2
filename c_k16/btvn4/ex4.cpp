#include<stdio.h>
//1: true
//0: false
int main() {
	int n, i, j;
	float a[100];
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%f", &a[i]);
	}
	
	//xu ly
	float m = a[0];
	for(i=1; i<n; i++) {
//		if(m < a[i]) {
//			m = a[i];
//		}
		m = (m > a[i]) ? m : a[i];
	}
	
	for(i=0; i<n; i++) {
		if(a[i] == m) {
			printf("%d ", i+1);
		}
	}
	
	
	//xuat kq
	for(i=0; i<n; i++) {
		printf("%.2f ", a[i]);
	}
	
	return 0;
}
