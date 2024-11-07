#include <iostream>

using namespace std;

// Fungsi rekursif untuk mencetak instruksi pemindahan balok
void hanoi(int n, char awal, char tujuan, char perantara) {
    if (n == 1) {
        cout << "Pindahkan balok 1 dari menara " << awal << " ke menara " << tujuan << endl;
        return;
    }

    hanoi(n - 1, awal, perantara, tujuan);
    cout << "Pindahkan balok " << n << " dari menara " << awal << " ke menara " << tujuan << endl;
    hanoi(n - 1, perantara, tujuan, awal);
}

int main() {
    int jumlah_balok;

    // Meminta input jumlah balok
    cout << "Masukkan jumlah balok: ";
    cin >> jumlah_balok;

    // Memanggil fungsi hanoi untuk mencetak instruksi pemindahan balok
    hanoi(jumlah_balok, 'A', 'C', 'B');

    return 0;
}
