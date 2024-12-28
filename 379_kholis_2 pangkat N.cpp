#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;

    int hasil = 1;

    for (int i = 0; i < N; i++) {
        hasil *= 2;
    }

    cout << "Hasil 2 pangkat " << N << " adalah: " << hasil << endl;

    return 0;
}
