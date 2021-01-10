#include <iostream>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    int a[2][n];
    for (int i=0; i<n; i++) {
        cin >> a[0][i] >> a[1][i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            if (a[0][i] == a[1][j]) {
                c++;
            }
        }
    }
    cout << c << "\n";
}
