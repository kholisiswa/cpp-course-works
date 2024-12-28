#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Program C++ Menghitung Keliling Persegi Panjang " << endl;
  cout << "" << endl;
 
  float panjang,lebar, keliling;
 
  cout << "Input panjang persegi: ";
  cin >> panjang;
  cout << "Input lebar persegi: ";
  cin >> lebar;
  cout << endl;
 
  keliling = (2 * panjang) + (2* lebar);
 
  cout << "Keliling persegi panjang = "<< keliling<< endl;
 
  return 0;
  }