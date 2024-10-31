#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Karyawan {
    string nama;
    int id;
    int gaji;
};

void writeDataToBinaryFile(vector<Karyawan> karyawanData) {
    ofstream binaryFile("karyawanData.bin", ios::binary);

    if (!binaryFile) {
        cerr << "Gagal membuka file!" << endl;
        exit(1);
    }

    for (Karyawan karyawan : karyawanData) {
        binaryFile.write(reinterpret_cast<char*>(&karyawan), sizeof(Karyawan));
    }

    binaryFile.close();
}

vector<Karyawan> readDataFromBinaryFile() {
    ifstream binaryFile("karyawanData.bin", ios::binary);
    vector<Karyawan> karyawanData;

    if (!binaryFile) {
        cerr << "Gagal membuka file!" << endl;
        exit(1);
    }

    Karyawan karyawan;
    while (binaryFile.read(reinterpret_cast<char*>(&karyawan), sizeof(Karyawan))) {
        karyawanData.push_back(karyawan);
    }

    binaryFile.close();
    return karyawanData;
}

int main() {
    vector<Karyawan> karyawanData;
    string nama;
    int id, gaji;

    cout << "Masukkan jumlah karyawan: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama karyawan: ";
        cin >> nama;

        cout << "Masukkan ID karyawan: ";
        cin >> id;

        cout << "Masukkan gaji karyawan: ";
        cin >> gaji;

        Karyawan karyawan = {nama, id, gaji};
        karyawanData.push_back(karyawan);
    }

    writeDataToBinaryFile(karyawanData);

    karyawanData = readDataFromBinaryFile();

    for (Karyawan karyawan : karyawanData) {
        cout << "Nama: " << karyawan.nama << endl;
        cout << "ID: " << karyawan.id << endl;
        cout << "Gaji: " << karyawan.gaji << endl;
        cout << "=============================" << endl;
    }

    return 0;
}