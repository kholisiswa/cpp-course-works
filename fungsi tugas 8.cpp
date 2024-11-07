#include <iostream>

using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// Fungsi permutasi
int permutasi(int n, int r) {
    if (n < r) {
        return 0;
    } else {
        return faktorial(n) / faktorial(n - r);
    }
}

// Fungsi kombinasi
int kombinasi(int n, int r) {
    if (n < r) {
        return 0;
    } else {
        return faktorial(n) / (faktorial(r) * faktorial(n - r));
    }
}

int main() {
    int n = 5;
    int r = 3;

    int hasil_permutasi = permutasi(n, r);
    int hasil_kombinasi = kombinasi(n, r);

    cout << "Permutasi P(" << n << "," << r << ") = " << hasil_permutasi << endl;
    cout << "Kombinasi C(" << n << "," << r << ") = " << hasil_kombinasi << endl;

    return 0;
}
