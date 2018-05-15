#include <iostream>

using namespace std;

int main() {
    bool b = false, g = false;;
    int n, t;
    string s, o = "";
    cin >> n >> t >> s;
    for (int j = 0; j < t; j++) {

        for (int i = 0; i < n; i++) {
            if (s[i] == "B") {
                b = true;
            }
            if (b == true && s[i] == "G") {
                g = true;
            }
            if (b == true && g == true) {
                // delete last character
                o.pop_back();
                // append "GB"
                o += "GB";
                // change b and g back to false
                b, g = false;
            } else {
                cout << s[i] << "\n";
                o += s[i];
            }
        }
        s = o;
        o = "";
    }
    cout << s << "\n";
}
