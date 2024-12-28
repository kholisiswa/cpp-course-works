#include <iostream>
using namespace std;
int main() {
    int n;

    // Langkah 1: Meminta input dari pengguna untuk jumlah elemen dalam array
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    // Langkah 2: Deklarasi array
    int arr[n];

    // Langkah 3: Mengisi array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    // Langkah 4: Menampilkan isi array menggunakan pernyataan for
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
