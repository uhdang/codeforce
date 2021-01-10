#include <iostream>

using namespace std;

int main() {
    int n, cc = 0, lc = 0;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++) {
        int g;
        cin >> g;
        array[i] = g;
        if (i > 0 && array[i-1] <= g) {
            cc++;
            if (cc > lc) {
                lc = cc;
            }
        } else {
            cc = 0;
        }
    }
    cout << lc + 1 << "\n";
}
