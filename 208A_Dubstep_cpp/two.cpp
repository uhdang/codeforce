#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.find("WUB") != string::npos) {
        s.replace(s.find("WUB"), 3, " ");
    }
    cout << s << "\n";
}
