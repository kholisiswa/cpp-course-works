#include <iostream>
using namespace std;

float NilTgs, NilPar, NilUTS, NilUAS, BobotTgs, BobotPar, BobotUTS, BobotUAS, NilAkhir;

int main()
{
    cout<<"Masukkan nilai tugas: ";
    cin>>NilTgs;
    cout<<"Masukkan bobot nilai tugas (dalam persentase): ";
    cin>>BobotTgs;
    cout<<"Masukkan nilai partisipasi: "; 
    cin>>NilPar;
    cout<<"Masukkan bobot nilai partisipasi (dalam persentase): ";
    cin>>BobotPar;
    cout<<"Masukkan nilai UTS: ";
    cin>>NilUTS;
    cout<<"Masukkan bobot nilai UTS (dalam persentase): ";
    cin>>BobotUTS;
    cout<<"Masukkan nilai UAS: ";
    cin>>NilUAS;
    cout<<"Masukkan bobot nilai UAS (dalam persentase): ";
    cin>>BobotUAS;
  
    NilAkhir=BobotTgs/100*NilTgs+BobotPar/100*NilPar+BobotUTS/100*NilUTS+BobotUAS/100*NilUAS;
    
    if (NilAkhir>=90) 
      cout<<"Grade = A";
    else if (NilAkhir>=80)
      cout<<"Grade = B"; 
    else if (NilAkhir>=70)
      cout<<"Grade = C"; 
    else if (NilAkhir>=60) 
      cout<<"Grade = D";
    else
      cout<<"Grade = F";
    return 0;
}