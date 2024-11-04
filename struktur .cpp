#include <iostream>
#include <string>

using namespace std;

struct TanggalLahir {
    int hari;
    int bulan;
    int tahun;
};

struct Mahasiswa {
    string nama;
    TanggalLahir tanggal_lahir;
};

int main() {
    int n;

    cout << "Jumlah mahasiswa: ";
    cin >> n;

    Mahasiswa daftarMahasiswa[n];

    for (int i = 0; i < n; i++) {
        cout << "Nama Mahasiswa: ";
        cin >> daftarMahasiswa[i].nama;
        cout << "Tanggal lahir: ";
        cin >> daftarMahasiswa[i].tanggal_lahir.hari;
        cout << "Bulan lahir: ";
        cin >> daftarMahasiswa[i].tanggal_lahir.bulan;
        cout << "Tahun lahir: ";
        cin >> daftarMahasiswa[i].tanggal_lahir.tahun;
    }

    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nama: " << daftarMahasiswa[i].nama << endl;
        cout << "Tanggal Lahir: " << daftarMahasiswa[i].tanggal_lahir.hari << "/"
             << daftarMahasiswa[i].tanggal_lahir.bulan << "/"
             << daftarMahasiswa[i].tanggal_lahir.tahun << endl;
    }

    return 0;
}
