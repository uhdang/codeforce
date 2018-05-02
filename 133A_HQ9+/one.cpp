#include <iostream>

using namespace std;

int main() {
    string p;
    cin >> p;
    for (int i = 0; i < p.length(); i++) {
        if (int(p[i]) == 72 || int(p[i]) == 81 || int(p[i]) == 57) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
