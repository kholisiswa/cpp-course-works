#include <iostream> 
using namespace std;

// "a" adalah jumlah mahasiswa dan "b" adalah nilai mahasiswa

int main() {

int a;

cout << "Masukkan jumlah mahasiswa: "<< endl;

cin >> a;

int b[a];

for (int i = 0; i < a; i++) {

cout<<"Masukkan nilai mahasiswa ke " << i + 1 << ": ";

cin >> b[i];

}

cout << endl;

cout<<"Daftar mahasiswa yang lulus: " << endl;

for (int i = 0; i < a; i++) {

if (b[i] > 50) {

cout<<"Mahasiswa ke " << i + 1 << ": Nilai " << b[i] << " (Lulus)" << endl;

}
}
cout << endl;

cout<<"Daftar mahasiswa yang tidak lulus: " << endl;

for (int i = 0; i < a; i++) {

if (b[i] <= 50) {

cout<<"Mahasiswa ke " << i + 1 << "Nilai" << b[i] << " (Tidak Lulus)" << endl;

}

}

return 0;

}