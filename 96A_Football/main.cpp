#include <iostream>
#include <string>

int main() {

    std::string s;
    std::cin >> s;

    int c = 0;

    for (int i = 0; i < s.length(); i++) {
        if (int(s[i]) == int(s[i+1])){
            c++;
        } else {
            c=0;
        }

        if (c == 6) {
            std::cout << "YES" << "\n";
            return 0;
        }
    }
    std::cout << "NO" << "\n";
    return 0;
}

