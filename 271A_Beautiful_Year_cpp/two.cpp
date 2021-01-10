#include <iostream>
using namespace std;
int main() {
    int w = 0, x = 0, y = 0, z = 0, n;
    cin >> n;
    while (w == x || x == y || y == z || z == w || w == y || x == z) {
        n++;
        w = n / 1000 % 10;
        x = n / 100 % 10;
        y = n / 10 % 10;
        z = n % 10;
    }
    cout << n << "\n";
}
