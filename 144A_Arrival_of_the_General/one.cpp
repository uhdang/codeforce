// 1. locate biggest integer and smallest integer. Biggest one closest to location 0 and smallest closest to the end location to prepare for repeating biggest/smallest integer.
// 2. count distance (biggest - 0) and (smallest - end).
// 3. if location for biggest is bigger than smallest, subtract one since there was already swap happened.

// for smallest value, get biggest index, while smallest index for biggest value
// which means smallest index should get overridden constantly while biggest index takes the FIRST index

#include <iostream>

using namespace std;

int main() {

    int s_i = 0, b_i = 0, n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] <= array[s_i]) {
            s_i = i;
        }
        if (array[i] > array[b_i]) {
            b_i = i;
        }
    }

    cout << b_i + (n-1) - s_i - (b_i > s_i) << "\n";
}
