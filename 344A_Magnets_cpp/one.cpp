#include <iostream>

using namespace std;

int main() {
    int n, l = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a != l) {
            c++;
        }
        l = a;
    }
    cout << c << "\n";
}
