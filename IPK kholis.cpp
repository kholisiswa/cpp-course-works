#include <iostream>
using namespace std;

float IPK;

int main()
{
    cout<<"Masukkan IPK anda: ";
    cin>>IPK;
    if ((IPK>=3.50)&&(IPK<=4.00)) 
      cout<<"Sempurna";
    else if ((IPK>=3.00)&&(IPK<=3.49))
      cout<<"Sangat Baik";
    else if ((IPK>=2.00)&&(IPK<=2.99))
      cout<<"Baik"; 
    else if ((IPK>=1.00)&&(IPK<=1.99)) 
      cout<<"Mengulang"; 
    else if ((IPK>=0.00)&&(IPK<=0.99))
      cout<<"Tidak Lulus";
    else
      cout<<"Tolong masukkan nilai IPK yang benar";
    return 0;
}