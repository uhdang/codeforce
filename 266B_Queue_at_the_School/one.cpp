#include <iostream>

using namespace std;

int main() {
    int n, t;
    string s, a;
    bool b = false;
    cin >> n >> t >> s;
    for (int j = 0; j < t; j++) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B') {
                b = true;
            }
            if (b == true && s[i] == 'G') {
                a.pop_back();
                a += "GB";
                b = false;
            } else {
                a += s[i];
            }
        }
        b = false;
        s = a;
        a = "";
    }
    cout << s << "\n";
}
