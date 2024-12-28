
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int k = 0;
    int j = 1;
    int hasil;
    
    for (int i = 2; i <= n; ++i) {
        hasil = k + j;
        k = j;
        j = hasil;
    }
    
    return hasil;
}

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    
    int hasil = fibonacci(N);
    cout << "Nilai suku ke-" << N << " dari deret Fibonacci adalah: " << hasil << endl;
    
    return 0;
}