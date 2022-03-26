#include<iostream>

using namespace std;

void Input(int a[], int &n) {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
}

void Output(int a[], int n) {
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

//lay vi tri so am trong mang, k co thi return -1
int GetPosOfNegElement(int a[], int n) {
	for(int i=0; i<n; i++) {
		if(a[i] < 0) {
			return i+1;
		}
	}
	return -1;
}
//chen 1 phan tu vao vi tri bat ki
void InsertElement(int a[], int &n, int pos, int val){
	for(int i=n; i>=pos; i--) {
		a[i] = a[i-1];
	}
	a[pos-1] = val;
	n++;
}

void PhanA(int a[], int &n) {
	int x;
	cin >> x;
	
	int pos = GetPosOfNegElement(a, n);
	if(pos != -1) {
		InsertElement(a, n, pos+1, x);
	} else {
		InsertElement(a, n, n+1, x);
	}
}

// Phan B
void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int GetMaxOfArr(int a[], int n) {
	int m = a[0];
	for(int i=1; i<n; i++) {
		m = m > a[i] ? m : a[i];
	}
	return m;
}

int GetMinOfArr(int a[], int n) {
	int m = a[0];
	for(int i=1; i<n; i++) {
		m = m < a[i] ? m : a[i];
	}
	return m;
}

void PhanB(int a[], int n) {
	int max = GetMaxOfArr(a, n);
	int min = GetMinOfArr(a, n);
	int nMax = 0;
	int nMin = n-1;
	int cnt = 0;
	
	//chuyen cac so max ve dau mang
	for(int i=0; i<n; i++) {
		if(a[i] == max) {
			Swap(a[nMax++], a[i]);
		}
	}
	//chuyen cac so min ve cuoi mang
	for(int i=nMax; i<n-1-cnt; i++) {
		if(a[i] == min) {
			Swap(a[nMin--], a[i]);
			cnt++;
		}
	}
	//sap xep giua cac so max v� cac so min
	for(int i=nMax; i<nMin; i++) {
		for(int j=i+1; j<nMin; j++) {
			if(a[i] > a[j]) {
				Swap(a[i], a[j]);
			}
		}
	}
}

int main() {
	int a[100], n;
	
	Input(a, n);
	
	//� a
	PhanA(a, n);
	
	Output(a, n);
	
	cout << endl;
	//� b
	PhanB(a, n);
	
	Output(a, n);
	
	return 0;
}
