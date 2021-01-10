#include <iostream>

using namespace std;

int main() {
    unsigned long long int n;
    int c = 0;
    cin >> n;
    for (int i = 0; i < to_string(n).length(); i++) {
        if (to_string(n)[i] == to_string(4)[0] || to_string(n)[i] == to_string(7)[0]) {
            c++;
        }
    }
    for (int i = 0; i < to_string(c).length(); i++) {
        if (to_string(c)[i] != to_string(4)[0] && to_string(c)[i] != to_string(7)[0]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
