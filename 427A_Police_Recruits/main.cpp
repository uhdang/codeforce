#include <iostream>
int n, policeAvailable = 0, numUntreated = 0, t;
int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> t;
        policeAvailable += t;
        if (policeAvailable < 0) {
            numUntreated += 1;
            policeAvailable = 0;
        }
    }
    std::cout << numUntreated;
}