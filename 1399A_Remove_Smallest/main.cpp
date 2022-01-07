#include <iostream>
#include <vector>


int main() {
    int numTests, arrayLength, elem;
    std::vector<int> a;
    std::vector<std::string> outputArray;
    std::cin >> numTests;

    std::string output;
    for (int i = 0; i < numTests; i++) {
        a.clear();
        output = "YES";
        std::cin >> arrayLength;

        for (int j = 0; j < arrayLength; j++) {
            std::cin >>  elem;
            a.push_back(elem);
        }


        for (int k = 0; k < arrayLength; k++) {
            for (int l = 0; l < arrayLength; l++) {
                int first = a.at(k);
                int second = a.at(l);
                if (abs(first - second) > 1) {
                    output = "NO";
                }
            }
        }

        std::cout << output << "\n";
}