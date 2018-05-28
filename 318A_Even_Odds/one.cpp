#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double n, k, half, inc = 1;
    cin >> n >> k;
    half = ceil(n/2.0);
    bool count_odd = (k <= half ? true : false);
    k = (k <= half ? k : k-ceil(n/2));

    if (count_odd == 0) {
        inc++;
    }

    for (int i = 1; i < k; i++) {
        inc += 2;
    }
    cout << inc << "\n";
}



// Use Math !
//
// when n%2 == 0
//
// i.e. n = 10, k = 3
// [1 3 5 7 9 2 4 5 8 10]
// ceil(n/2) = 5
// x <= ceil(n/2), odd set
// x > ceil(n/2), even set
//
// if k <= ceil(n/2), count from the beginning,
// if k > ceil(n/2), count from ceil(n/2)th position
//
//
//
//
//
// when n%2 != 0
// i.e. n = 7, k = 7
// [1 3 5 7 2 4 6]
//
// x <= ceil(n/2) odd set
// x > ceil(n/2) even set
//
// if k <= ceil(n/2), count from the beginning,
// if k > ceil(n/2), count from ceil(n/2)th position
//
//

