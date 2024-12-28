#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_string;
    
    cout << "Masukkan sebuah string: ";
    getline(cin, input_string);

    int panjang_string = input_string.length();
    
    // Memproses untuk membalikkan string
    string string_terbalik = "";
    for (int i = panjang_string - 1; i >= 0; i--) {
        string_terbalik += input_string[i];
    }

    cout << "Panjang string adalah: " << panjang_string << endl;
    cout << "String terbalik adalah: " << string_terbalik << endl;

    return 0;
}
