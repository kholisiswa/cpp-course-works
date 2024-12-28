#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "A" << endl;
    } else if (nilai >= 80) {
        cout << "B" << endl;
    } else if (nilai >= 70) {
        cout << "C" << endl;
    } else if (nilai >= 60) {
        cout << "D" << endl;
    } else {
        cout << "E" << endl;
    }

    return 0;
}
    