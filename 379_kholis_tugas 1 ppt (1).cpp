#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tidak ada bilangan untuk diuji." << endl;
        return 1;
    }

    int bilangan;
    cout << "Masukkan bilangan ke-1: ";
    cin >> bilangan;

    int terbesar = bilangan;

    for (int i = 2; i <= n; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bilangan;

        if (bilangan > terbesar) {
            terbesar = bilangan;
        }
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
