#include <iostream>

using namespace std;

int main() {
    int a[26] = {0};
    int c = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (a[int(s[i])-97] != 1) {
            a[int(s[i])-97]++;
            c++;
        }
    }
    cout << (c%2!=0?"IGNORE HIM!\n":"CHAT WITH HER!\n");
}
