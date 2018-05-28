#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double n;
    unsigned long long int k, inc = 1;
    cin >> n >> k;
    if(k > ceil(n/2.0)) {
        k = k - ceil(n/2.0);
        inc++;
    }
    //cout << "round up: " <<  ceil(n/2.0) << "\n";
    //cout << "k: " << k << "\n";
    //cout << "inc: " << inc << "\n";
    //cout << "add: " << 2*(k-1) << "\n";
    cout << inc + 2*(k-1) << "\n";
}
// 1000000000000 500000000001
// 999999999997 499999999999
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

