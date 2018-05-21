#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, add;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            add = i * -1;
        } else {
            add = i;
        }
        sum += add;
    }
    cout << sum << "\n";
}
