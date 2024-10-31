#include <iostream>

using namespace std;

int main() {
    
    int nilai1, nilai2, nilai3;
    cout << "masukkan nilai mahasiswa: " << endl;
    cin >> nilai1 >> nilai2 >> nilai3;

    int
    *pointerNilai = &nilai1;
    *pointerNilai += nilai2;
    *pointerNilai += nilai3;
    *pointerNilai /= 3;

    cout <<*pointerNilai << endl;

    return 0;
}
