#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    bool first_lowercase = false;
    string w, n;
    int u_count;
    cin >> w;

    for (int i = 0; i < w.length(); i++) {
        if (isupper(w[i])) {
            n += tolower(w[i]);
            u_count++;
        } else {
            if (i == 0) {
                first_lowercase = true;
            }
            n += toupper(w[i]);
        }
    }

    if (u_count == w.length() || (first_lowercase == true && (u_count + 1 == w.length()))) {
        cout << n << "\n";
    } else {

        cout << w << "\n";
    }
}
