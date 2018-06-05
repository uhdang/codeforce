#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main() {
    char s[100];
    string l = "", u = "";
    int l_c = 0, u_c = 0;
    cin >> s;
    for (int i = 0; i < (int)strlen(s); i++) {
        if (islower(s[i])) {
            l_c++;
        } else {
            u_c++;
        }
        l += tolower(s[i]);
        u += toupper(s[i]);
    }
    cout << (l_c >= u_c ? l : u) << "\n";
}
