#include <iostream>

int main() {

    int n, c = 0;
    std::string s;
    std::cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == s[i+1]) {
            c++;
        }
    }

    std::cout << c << "\n";
}
