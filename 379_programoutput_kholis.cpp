#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        cout << i << " " << (1 << i) << endl;
    }
    return 0;
}
