#include <iostream>
#include <algorithm>
#include <string>

std::string lowercase_word(std::string w) {
    std::transform(w.begin(), w.end(), w.begin(), ::tolower);
    return w;
}


int main() {

    std::string a, b;
    std::cin >> a >> b;

    std::string l_a = lowercase_word(a);
    std::string l_b = lowercase_word(b);

    int sum_a = 0;
    int sum_b = 0;

    if (l_a > l_b) {
        std::cout << 1 << "\n";
    } else if (l_a < l_b) {
        std::cout << -1 << "\n";
    } else {
        std::cout << 0 << "\n";
    }
}
