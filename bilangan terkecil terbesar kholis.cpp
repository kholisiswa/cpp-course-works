#include <iostream>
using namespace std;
int main() {
	
	cout<<"membandingkan bilangan terbesar dan terkecil"<<endl;
	int terkecil, terbesar, bil1, bil2;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	
	
	//Menentukan nilai terkecil
	terkecil=bil1;
	
	if (bil2 < terkecil){
		terkecil=bil2;
	}
	
	
	//Menentukan nilai terbesar
	terbesar=bil1;
	
	if (bil2 > terbesar){
		terbesar=bil2;
	}
	
	
	cout<<"\nNilai Terkecil adalah "<<terkecil<<endl;
	cout<<"Nilai Terbesar adalah "<<terbesar<<endl;

	return 0;	
}