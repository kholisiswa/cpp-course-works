#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_string;
    
    cout << "Masukkan sebuah string: ";
    getline(cin, input_string); // Menggunakan getline untuk menerima seluruh baris string

    int panjang_string = input_string.length();

    cout << "Panjang string adalah: " << panjang_string << endl;

    return 0;
}
