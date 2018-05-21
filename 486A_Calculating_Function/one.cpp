#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, p_m = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        p_m = p_m * -1;
        sum += p_m * i;
    }
    cout << sum << "\n";
}
