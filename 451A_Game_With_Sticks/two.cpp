#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    cout << (min(n,m)%2 == 0 ? "Malvika" : "Akshat") << "\n";
}
