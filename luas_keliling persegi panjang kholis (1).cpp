#include <iostream>
 
using namespace std;
 
int main()
{
  cout << " Menghitung Keliling Persegi Panjang= " << endl;
  cout << "" << endl;
 
  float panjang,lebar,luas ,keliling;
 
  cout << "Input panjang persegi: ";
  cin >> panjang;
  cout << "Input lebar persegi: ";
  cin >> lebar;
  
 
  keliling = (2 * panjang) + (2* lebar);
 luas = panjang*lebar;
  cout << "Keliling persegi panjang = "<< keliling<< endl;
 cout << "luas persegi panjang= " << luas<< endl;
  return 0;
  }