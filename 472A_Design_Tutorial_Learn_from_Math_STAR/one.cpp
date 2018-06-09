#include <iostream>

using namespace std;

int isPrime (int n) {
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n;
    cin >> n;
    for (int i = 3; i < n-3; i++) {
        for (int j = n-3; j > 3; j--) {
            if (!isPrime(i) && !isPrime(j) && i + j == n) {
                cout << i << " " <<  j << "\n";
                return 0;
            }
        }
    }
}
