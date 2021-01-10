#include <iostream>

using namespace std;

int main() {
    int o_c = 0, o_i, e_c = 0, e_i, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t%2 == 0) {
            e_i = i+1;
            e_c++;
        } else {
            o_i = i+1;
            o_c++;
        }
    }
    cout << (e_c > o_c ? o_i : e_i) << "\n";
}
