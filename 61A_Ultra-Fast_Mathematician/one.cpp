// given a and b, when adding, a corresponding digit could be 0, 1, 2.
// if 0, both had 0.
// if 1, a and b had 0 and 1 regardless of order
// if 2, both had 1.
//
// So, by adding and then looking into each digit, we can figure out,
// if 0 or 2, 0
// if 1, 1
//
// edge case: when both given numbers start with 0, a+b outputs 1 less digit
#include <iostream>

using namespace std;

int main() {
    string a, b;
    string s, o = "";
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        int sum = a[i] + b[i];
        //cout << "a: " << a[i] << " - b: " << b[i] << " - sum: " << sum << "\n";
        if (sum == 97) {
            o += "1";
        } else {
            o += "0";
        }
    }
    cout << o << "\n";
}
