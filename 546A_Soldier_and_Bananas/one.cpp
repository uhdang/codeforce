#include <iostream>

using namespace std;

int main() {
    int k, n, w, m = 0;
    cin >> k >> n >> w;
    for (int i = 1; i < w + 1; i++) {
        m += k*i;
    }
    cout << (m-n>0?m-n:0) << "\n";
}
