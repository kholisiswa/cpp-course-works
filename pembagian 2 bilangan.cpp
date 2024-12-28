#include <iostream>
using namespace std;

int main()
{
  float Bil1, Bil2, Hasil;
    cout<<"Masukkan bilangan pertama : "; cin>>Bil1;
    cout<<"Masukkan bilangan kedua : "; cin>>Bil2;
    Hasil=Bil1/Bil2;
    if(Bil2!=0)
       cout<<"Hasil pembagian : "<<Hasil<<endl;
    if(Bil2==0)
       cout<<"Bilangan tidak bisa dibagi dengan nol";
    return 0;
}