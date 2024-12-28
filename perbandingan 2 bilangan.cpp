#include <iostream>
using namespace std;

int main()
{
  float Bil1, Bil2;
    cout<<"Masukkan bilangan pertama : "; cin>>Bil1;
    cout<<"Masukkan bilangan kedua : "; cin>>Bil2;    
    if(Bil1<Bil2)
       cout<<Bil1<<" lebih kecil dari "<<Bil2;
    if(Bil1>Bil2)
       cout<<Bil2<<" lebih kecil dari "<<Bil1;
    if(Bil1==Bil2)
       cout<<Bil2<<" sama dengan "<<Bil1;
    return 0;
}