#include <iostream>

using namespace std;

int main() {
    int x, c = 0;
    cin >> x;
    for (int i = 5; i > 0; i--) {
        c += x/i;
        x = x%i;
    }
    cout << c << "\n";
}
