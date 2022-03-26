#include<stdio.h>
//1: true
//0: false
int main() {
	int n, a[100], i, j;
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	//xu ly
	int sum = 0;

	for(i=0; i<n; i++) {
		int check = 1; 
//		for(j=2; j<=sqrt(a[i]); j++) 
//		for(j=2; j*j<=a[i]; j++)
		for(j=2; j<a[i]; j++) {
			if(a[i] % j == 0) {
				check=0;
				break;
			}
		}
		
		if(a[i] > 1 && check == 1) {
			printf("%d ", a[i]);
			sum += a[i];
		}
	}
	
	printf("\n%d", sum);


	return 0;	
}
