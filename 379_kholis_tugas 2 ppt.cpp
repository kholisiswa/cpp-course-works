#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
