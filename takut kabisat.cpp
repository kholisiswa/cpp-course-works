#include <iostream>
using namespace std;

int main() {
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << "Tahun Kabisat" << endl;
    } else {
        cout << "Bukan Tahun Kabisat" << endl;
    }

    return 0;
}