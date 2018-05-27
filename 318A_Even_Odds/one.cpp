#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Use Math !
    // 1. difference case for odd + even number n

    unsigned long long int n, k, inc = 1;
    vector<unsigned long long int>v;
    cin >> n >> k;
    while (inc <= n) {
        v.push_back(inc);
        inc += 2;
    }
    inc = 2;
    while (inc <= n) {
        v.push_back(inc);
        inc += 2;
    }
    cout << v.at(k-1) << "\n";
}
