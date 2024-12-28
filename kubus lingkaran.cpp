#include <iostream>

using namespace std;

int main()
{
    const float pi=3.14;
    int pil;
    float sisi, jari2, tinggi, hasil;    
    
    cout<<"PILIH JENIS OPERASI"<<endl;
    cout<<"1. Volume kubus"<<endl;
    cout<<"2. Luas lingkaran"<<endl;
    cout<<"3. Volume silinder"<<endl;
    cout<<endl;
    
    cout<<"Masukan Pilihan: ";
    cin>>pil;
    
    switch(pil){
               case 1 :cout<<"Masukkan panjang sisi: ";
               cin>>sisi;
               hasil=sisi*sisi*sisi;
               cout<<"Volume kubus adalah: "<<hasil;
               break;
               case 2 :cout<<"Masukkan panjang jari-jari: ";
               cin>>jari2;
               hasil=pi*jari2*jari2;
               cout<<"Luas lingkaran adalah: "<<hasil;
               break;
               case 3 :cout<<"Masukkan panjang jari-jari: ";
               cin>>jari2;
               cout<<"Masukkan tinggi silinder: ";
               cin>>tinggi;
               hasil=pi*jari2*jari2*tinggi;
               cout<<"Volume silinder adalah: "<<hasil;
               break;
               default :
                 cout<<"Tolong masukkan pilihan yang benar!"<<endl;
    }
}