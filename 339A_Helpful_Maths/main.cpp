#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        std::cout << s[i] << "\n";
    }

    int i_s = std::stoi(s);

    std::cout << i_s << "\n";

}
