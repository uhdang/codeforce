#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    cout << max(0, k*(w+1)*w/2-n) << "\n";
}
