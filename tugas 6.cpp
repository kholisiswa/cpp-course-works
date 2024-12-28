#include <iostream>

int main() {
    int n;
    
    // Langkah 1: Meminta input dari pengguna
    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> n;
    
    // Langkah 2: Deklarasi dan inisialisasi array
    int arr[n];
    
    // Langkah 3: Mengisi array
    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan nilai elemen ke-" << i << ": ";
        std::cin >> arr[i];
    }
    
    // Langkah 4: Menampilkan isi array
    std::cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;

    // Langkah 5: Meminta input dari pengguna untuk deret Fibonacci
    int bilangan;
    std::cout << "Masukkan bilangan untuk deret Fibonacci: ";
    std::cin >> bilangan;

    // Langkah 6: Menghitung dan menampilkan deret Fibonacci
    int a = 0, b = 1;
    std::cout << "Deret Fibonacci: ";
    for (int i = 1; i <= bilangan; i++) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
