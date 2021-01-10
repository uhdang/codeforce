#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        array[t] = i;
    }
    for (int j = 1; j <= n; j++) {
        cout << array[j] << " ";
    }
}
