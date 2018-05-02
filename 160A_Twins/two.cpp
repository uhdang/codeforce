#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n; 
    float sum = 0, mine = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a+n);

    for (int j = n - 1; j > -1; j--) {
        mine += a[j];
        if (mine > sum/2) {
            cout << n-j << "\n";
            return 0;
        }
    }
    cout << n << "\n";
    return 0;
}
