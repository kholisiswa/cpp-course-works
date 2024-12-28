#include <iostream>
#include <string>
using namespace std;

string username, password;

int main()
{
    cout<<"Masukkan username anda: ";
    cin>>username;
    cout<<"Masukkan password anda: ";
    cin>>password;
    
    if ((username=="admin")&&(password=="adminpass")) 
      cout<<"Login berhasil";
    else
      cout<<"Username atau password yang anda masukkan salah";
    return 0;
}