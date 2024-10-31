#include <iostream>
#include<vector>
#include <string>

using namespace std;

struct Hiu {
    string nama;
    string makanan;
};

int main() {
    
    int N;
    cout << "masukkan data: " << endl;
    cin >> N;

    
    vector<Hiu> namahiu(N);
    for (int i = 0; i < N; ++i) {
        cin >> namahiu[i].nama >> namahiu[i].makanan;
    }

    for (const Hiu& hiu : namahiu) {
        if (hiu.makanan == "tomato") {
            cout << hiu.nama << endl;
        }
    }

    return 0;
}
