// 1. locate biggest integer and smallest integer. Biggest one closest to location 0 and smallest closest to the end location to prepare for repeating biggest/smallest integer.
// 2. count distance (biggest - 0) and (smallest - end).
// 3. if location for biggest is bigger than smallest, subtract one since there was already swap happened.

// for smallest value, get biggest index, while smallest index for biggest value
// which means smallest index should get overridden constantly while biggest index takes the FIRST index

#include <iostream>

using namespace std;

int main() {

    int s_v = 100, b_v = 1, s_i, b_i = 0, n, c = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        array[i] = input;
        if (input <= s_v) {
            s_v = input;
            s_i = i;
        }
        if (input > b_v) {
            b_v = input;
            b_i = i;
        }
    }
    //cout << b_v << " : " << b_i << "\n";
    //cout << s_v << " : " << s_i << "\n";



    c += b_i;
    c += (n-1)-s_i;

    if (b_i > s_i) {
        c--;
    }

    cout << c << "\n";
}
