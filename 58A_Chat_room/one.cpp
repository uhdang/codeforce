#include <iostream>
#include <string>

using namespace std;

int main() {
    string n, h = "hello";
    int c = 0;
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == h[c]) {
            c++;
        }
    }
    if (c == 5) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}
