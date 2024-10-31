#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string nameFile;
    cout<<"Masukkan nama file txt yang anda buka: ";
    cin>>nameFile;

    ifstream inputFile(nameFile);
    if(!inputFile){
        cout << "buka file yang ada di folder yang sama dengan file ini"<<endl;
    }
    int nilai;
    int kodegacor=0;
    int baris=1;
    while(inputFile>>nilai){
        if (baris%2==1){
            kodegacor+=nilai;
        }
        baris++;
    }
    inputFile.close();
    cout << "Kode gacornya adalah: "<<kodegacor<<endl;
    return 0;
}
