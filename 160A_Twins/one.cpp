#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n];
    int sum = 0, sorted_sum = 0, iterate = n;

    for (int i = 0; i < n; i++) {
        cin >> c[i];
        sum += c[i];
    }

    sort(c, c + n, greater<int>());

    for (int j = 0; j < n; j++) {
        sorted_sum += c[j];
        if (sorted_sum > sum/2) {
            iterate = j;
            break;
        }
    }
    cout << iterate + 1 << "\n";
}
