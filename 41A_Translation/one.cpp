#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int a = 0, z = s.length() - 1;

    for (int i = 0; i < s.length(); i++) {
        //cout << s[a] << " : " << t[z] << "\n";
        //cout << s[z] << " : " << t[a] << "\n";
        if (s[a] != t[z]) {
            cout << "NO\n";
            return 0;
        }
        a++;
        z--;
    }
    cout << "YES\n";
    return 0;

}
