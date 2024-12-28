#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;

    int hasil = 1;
    int counter = 0;

    while (counter < N) {
        hasil *= 2;
        counter++;
    }

    cout << "Hasil 2 pangkat " << N << " adalah: " << hasil << endl;

    return 0;
}
