#include <iostream>

using namespace std;

int main() {
    int n, c = 0, min = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        c = c - a + b;
        
        if (c > min) {
            min = c;
        }
    }
    cout << min << "\n";
}
