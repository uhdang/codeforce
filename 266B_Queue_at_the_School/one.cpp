#include <iostream>

using namespace std;

int main() {
    bool b = false, g = false;;
    int n, t;
    string s, o = "";
    cin >> n >> t >> s;
    for (int j = 0; j < t; j++) {

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                b = true;
            }
            if (b == true && s[i] == 'G') {
                g = true;
            }
            if (b == true && g == true) {
                o.pop_back();
                o += "GB";
                b = false;
                g = false;
            } else {
                o += s[i];
            }
        }
        s = o;
        o = "";
    }
    cout << s << "\n";
}
