#include <iostream>
#include <vector>

int main() {
    int n, policeAvailable = 0, numUntreated = 0;
    std::vector<int> l;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t;
        l.push_back(t);
    }

    for (int i = 0; i < l.size(); i++) {
        if (l.at(i) == -1) {
            policeAvailable -= 1;
            if (policeAvailable < 0) {
                numUntreated += 1;
                policeAvailable = 0;
            }
        } else {
            policeAvailable += l.at(i);
        }
    }
    std::cout << numUntreated;
}