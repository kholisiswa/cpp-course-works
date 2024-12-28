#include <iostream>
using namespace std;

int main()
{
  float Bil1, Bil2, Bil3;
    cout<<"Masukkan bilangan pertama : "; cin>>Bil1;
    cout<<"Masukkan bilangan kedua : "; cin>>Bil2;
    cout<<"Masukkan bilangan ketiga : "; cin>>Bil3;    
    if((Bil1>Bil2)&&(Bil1>Bil3))
      cout<<Bil1<<" adalah bilangan yang paling besar";
    if((Bil2>Bil1)&&(Bil2>Bil3))
      cout<<Bil2<<" adalah bilangan yang paling besar";
    if((Bil3>Bil1)&&(Bil3>Bil2))
      cout<<Bil3<<" adalah bilangan yang paling besar";
    if((Bil1==Bil2)&&(Bil1>Bil3))
      cout<<Bil1<<" adalah bilangan yang paling besar";
    if((Bil1==Bil3)&&(Bil1>Bil2))
      cout<<Bil1<<" adalah bilangan yang paling besar";
    if((Bil2==Bil3)&&(Bil2>Bil1))
      cout<<Bil2<<" adalah bilangan yang paling besar";
    if((Bil1==Bil2)&&(Bil1==Bil3))
      cout<<Bil1<<" adalah bilangan yang paling besar";
    return 0;
}