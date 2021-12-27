#include <iostream>

int main()
{
    int n{};
    int m{};
    int location = -1;
    std::cin >> n >> m;

    std::string line = "";
    std::string end = "";
    std::string begin = "";

    for (int i = 0; i < m; i++) {
        line += "#";

        if (i == 0) {
            begin += "#";
        } else {
            begin += ".";
        }

        if (i == m - 1) {
            end += "#";
        } else {
            end += ".";
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            std::cout << line << "\n";
        } else {
            if (location == -1) {
                std::cout << end << "\n";
            } else {
                std::cout << begin << "\n";
            }
            location *= -1;
        }
    }


    return 0;
}