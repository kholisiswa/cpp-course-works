#include <iostream>
using namespace std;

void rotasi(int *a,int *b,int *c) {
	for(int i = 1;i<=3;i++){
	  cout<< *a<< *b<<*c<<endl;
    int temp=*c;
		*c=*b;
		*b=*a;
		*a=temp;
		}
}

int main(){
	int nilaiA,nilaiB,nilaiC;
	cout<<"Masukkan nilai A: ";
	cin>>nilaiA;
	cout<<"Masukkan nilai B: ";
	cin>>nilaiB;
	cout<<"Masukkan nilai C: ";
	cin>>nilaiC;
	
	cout<<"Nilai awal: ";
	cout<<nilaiA<<nilaiB<<nilaiC<<endl;
	cout<<endl;
	
	rotasi(&nilaiA,&nilaiB,&nilaiC);
	cout <<nilaiA<<nilaiB<<nilaiC<<endl;
	
	
	
	
	
	
}
