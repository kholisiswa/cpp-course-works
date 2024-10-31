#include <iostream>
#include <string>
#include <fstream>

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

void simpan_data_mahasiswa(const Mahasiswa mahasiswa[], int n, const string& nama_file) {
    ofstream file(nama_file);
    if (file.is_open()) {
        for (int i = 0; i < n; i++) {
            file << mahasiswa[i].nama << endl;
            file << mahasiswa[i].tanggal_lahir.hari << "/"
                 << mahasiswa[i].tanggal_lahir.bulan << "/"
                 << mahasiswa[i].tanggal_lahir.tahun << endl;
        }
        file.close();
    } else {
        cerr << "Error: Gagal membuka file." << endl;
    }
}

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

    string nama_file;
    cout << "Nama file: ";
    cin >> nama_file;
    simpan_data_mahasiswa(daftarMahasiswa, n, nama_file);

    return 0;
}
