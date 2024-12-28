#include <iostream>
using namespace std;

int main()
{   
    int pilihan;
    int i=1;
    float s, r, luas_lingkaran, kubus, t, silinder;
    const float phi=3.14;
    
    cout << "1 --> untuk menghitung volume kubus" << endl;
    cout << "2 --> untuk menghitung luas lingkaran" << endl;
    cout << "3 --> untuk menghitung volume silinder" << endl;
    cout << " " << endl;
    
    do{
    
    cout << "Masukkan pilihan anda (1-3): ";
    cin >> pilihan;
    i++;
    switch(pilihan){
      case 1: cout << "Anda memilih operasi hitung volume kubus"<< endl;
              cout << "Masukkan panjang rusuk (s): ";
              cin >> s;
              kubus=s*s*s;
              cout << "Volume kubus adalah: " << kubus << endl;
      break;
      case 2: cout << "Anda memilih operasi hitung luas lingkaran" << endl;
              cout << "Masukkan jari-jari (r): ";
              cin >> r;
              luas_lingkaran=phi*r*r;
              cout << "Luas lingkaran adalah: " << luas_lingkaran << endl;
      break;
      case 3: cout << "Anda memilih operasi hitung volume silinder" << endl;
              cout << "Masukkan jari-jari (r): ";
              cin >> r;
              cout << "Masukkan tinggi silinder (t): ";
              cin >> t;
              silinder=phi*r*r*t;
              cout << "Volume silinder adalah: " << silinder << endl;
      break;
      default: cout << "Tidak ada dalam pilihan" << endl;
      break;
    }
   } while(i++);
    
    return 0;
    
}