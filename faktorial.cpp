#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;
    
    if (X < 1 || X > 10) {
        cout << "Bilangan X harus dalam rentang 1 hingga 10." << endl;
    } else {
        int hasil = 1;
        for (int i = 1; i <= X; i++) {
            hasil *= i;
        }
        cout << "Faktorial dari " << X << " adalah " << hasil << endl;
    }
    
    return 0;
}
