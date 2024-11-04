#include <iostream>
using namespace std;

int hanoi(int n, char sumber, char target, char perantara) {
    if (n == 1) {
        return 1;
    }
    int move1 = hanoi(n - 1, sumber, perantara, target);
    int move2 = hanoi(n - 1, perantara, target, sumber);
    return 1 + move1 + move2;
}

int main() {
    int N;

        cout << "Masukkan banyaknya cakram (antara 1 sampai 10): ";
        cin >> N;

        if (N < 1 || N > 10) {
            cout << "Masukkan tidak valid. Harap masukkan angka antara 1 sampai 10." << endl;
        }else {
     int totalMove = hanoi(N, 'A', 'C', 'B');
    cout << "Jumlah perpindahan cakram: " << totalMove << endl;
        }



 return 0;
}