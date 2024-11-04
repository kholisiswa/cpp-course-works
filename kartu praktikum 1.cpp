#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menentukan apakah mungkin membentuk urutan abc dengan satu atau tidak ada operasi
string apakahMungkin(const string& kartu) {
    // Memeriksa apakah bisa membentuk urutan "abc" dengan satu atau tidak ada operasi
    if ((kartu[0] == 'a' && kartu[1] == 'b') || (kartu[1] == 'b' && kartu[2] == 'c') || (kartu[0] == 'a' && kartu[2] == 'c'))
        return "Yes";
    else if ((kartu[0] == 'b' && kartu[1] == 'a') || (kartu[1] == 'a' && kartu[2] == 'c') || (kartu[0] == 'b' && kartu[2] == 'c'))
        return "Yes";
    else if ((kartu[0] == 'c' && kartu[1] == 'b') || (kartu[1] == 'b' && kartu[2] == 'a') || (kartu[0] == 'c' && kartu[2] == 'a'))
        return "yes";
    else if ((kartu[0] == 'a' && kartu[1] == 'c') || (kartu[1] == 'c' && kartu[2] == 'b') || (kartu[0] == 'a' && kartu[2] == 'b'))
        return "Yes";
    else
        return "NO";
}

int main() {
    // Meminta jumlah kasus uji
    int jumlahKasusUji;
    cout << "Masukkan jumlah kasus uji: ";
    cin >> jumlahKasusUji;

    // Memproses setiap kasus uji
    for (int i = 0; i < jumlahKasusUji; ++i) {
        string kartu;
        cout << "Masukkan urutan kartu ke-" << i + 1 << ": ";
        cin >> kartu;

        // Menentukan apakah mungkin membentuk urutan "abc" dengan satu atau tidak ada operasi
        string hasil = apakahMungkin(kartu);
        cout << hasil << endl;
    }

    return 0;
}
