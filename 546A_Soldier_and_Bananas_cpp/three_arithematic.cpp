#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    cout << max(0, k*w*(w+1)/2-n) << "\n";
}


// (1*k + 2*k + 3*k ... wk) - n
// k(1+2+3...w) - n
//
// Sw = (1+2+3...w)
// Sw = w + (w-1) + (w-2) ... + 1
//
// 2Sw = w(w+1)
// Sw = w(w+1)/2
