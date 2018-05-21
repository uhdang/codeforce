#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, p_m = 1, c = 0;
    cin >> n;
    while (c < n) {
        c++;
        p_m = p_m * -1;
        sum += p_m * c;
    }
    cout << sum;
    return 0;
}
