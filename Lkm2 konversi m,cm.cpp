#include <iostream>
using namespace std;

int cm, meter, sisa;
int main()
{
    cout << "Masukkan panjang dalam cm: ";
    cin >> cm;
    meter=cm/100;
    sisa=cm%100;
    cout << "Hasil konversi adalah: " << meter << "m " << sisa << "cm";
    
}