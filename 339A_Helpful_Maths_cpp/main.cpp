#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {

    std::string s;
    std::cin >> s;
    std::vector<int> c;

    for (int i = 0; i < s.length(); i++) {
        int i_s = s[i] - '0';
        if (i_s != -5) {
            c.push_back(i_s);
        }
    }

    std::sort(c.begin(), c.end());

    std::string word;
    std::string ch;

    for (int j = 0; j < c.size(); j++) {
        ch = std::to_string(c[j]);
        word += ch;
        if (j < c.size()-1) {
            word += '+';
        }
    }

    std::cout << word << "\n";

}
