#include <iostream>
using namespace std;

int  nomor_satu , nomor_dua ;

int main() {
    using namespace std;

    int mencari_terbesar(int nomor_satu, int input_nomor_dua);

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> nomor_satu;

    cout << "Masukkan bilangan kedua: ";
    cin >> nomor_dua;

    // Memanggil fungsi dan menampilkan hasil
    int result = mencari_terbesar(nomor_satu, nomor_dua);
    cout << "Bilangan terbesar adalah: " << result << endl;

    return 0;
}

// Implementasi fungsi
int mencari_terbesar(int nomorsatu ,int nomordua){
    // Menentukan bilangan terbesar
    if (nomorsatu > nomordua) {
        return nomorsatu;
    } else {
        return nomordua;
    }
}
