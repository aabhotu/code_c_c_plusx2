#include <iostream>
#include <fstream>

using namespace std;

class Array
{
private:
    float *values;
    int n;

public:
    friend istream &operator>>(istream &in, Array &a);
	friend ostream &operator<<(ostream &out, Array &a);
	void operator++();
    void operator--();
    friend void WriteToFile(char *fileName, Array a);
};

istream &operator>>(istream &in, Array &a)
{
    cout << "Nhap so phan tuw mang: ";
    in >> a.n;
    a.values = new float [a.n];
	for (int i = 0; i <= a.n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1<<" ";
        in >> a.values[i];
    }
    return in;
}
ostream &operator<<(ostream &out, Array &a){
	for (int i=0; i<=a.n; i++){
		out<<a.values[i]<<" ";
	}
	return out;
}

void Array::operator++(){
	for (int i=0; i<=this->n; i++){
		for(int j=i+1; j<=this->n; j++){
			if (this->values[j] <this->values[i]){
				float temp = this->values[j];
				this->values[j] = this->values[i];
				this->values[i] = temp;
			}
		}	
	}
}

void Array::operator--(){
	for (int i=0; i<=this->n; i++){
		for(int j=i+1; j<=this->n; j++){
			if (this->values[j] >this->values[i]){
				float temp = this->values[j];
				this->values[j] = this->values[i];
				this->values[i] = temp;
			}
		}	
	}
}

void WriteToFile(char *fileName, Array a){
	ofstream f(fileName, ios::app);
	f<<a<<endl;
	f.close();
}

int main(){
	Array a;
	cin>>a;
	++a;
	cout<<"Sap xep tang: "<<a<<endl;
	WriteToFile("tep.txt", a);
	
	--a;
	cout<<"Sap xep giam: "<<a<<endl;
	WriteToFile("tep.txt", a);
	
	return 0;
}
