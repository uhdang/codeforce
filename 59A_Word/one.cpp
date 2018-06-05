#include <iostream>
#include <locale>

using namespace std;

int main() {
    locale loc;
    int total, c_l = 0, c_u = 0;
    string s, a_l = "", a_u = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i], loc)) {
            c_l++;
        } else {
            c_u++;
        }
        a_l += tolower(s[i],loc);
        a_u += toupper(s[i],loc);
    }
    cout << (c_l >= c_u ? a_l : a_u) << "\n";

}
