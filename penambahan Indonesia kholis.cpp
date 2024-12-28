#include<iostream>
using namespace std;

int main(){

int bilangan_pertama,bilangan_kedua,sum;
    cout << "penambahan dua bilangan" << endl;
    cin >> bilangan_pertama>>bilangan_kedua;
    
    //tambahkan dua bilangan tersebut di sum
    
    sum=bilangan_pertama+bilangan_kedua;
    
    //printf sum
    cout <<bilangan_pertama <<"+" <<bilangan_kedua<<"="<< sum;
    
    return 0;
    }