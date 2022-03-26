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
	
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i] < 0 && a[j] < 0 && a[i] < a[j]) {
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			} 
		}
	}
	
	//xuat kq
	for(i=0; i<n; i++) {
		printf("%.2f ", a[i]);
	}
	
	return 0;
}
