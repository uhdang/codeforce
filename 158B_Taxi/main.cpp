#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int c = 0, n;
    int A[5] = {0, 0, 0, 0, 0}, r;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r;
        A[r]++;
    }

    c = A[4]+A[3]+(A[2]/2);

    int d = max(A[1] - A[3], 0);
    // A[1] > A[3] = A[1] - A[3]
    // A[1] < A[3] = 0
    // A[1] = A[3] = 0


    if (A[1] < A[3] || A[1] == A[3]) {
        c += A[2]%2;
        cout << c << "\n";

    }  else {
        int sum = 2*A[2]%2 + (A[1]-A[3]);
        c += sum/4;
        if (sum%4 != 0) {
            c++;
        }
        cout << c << "\n";
    }
}
