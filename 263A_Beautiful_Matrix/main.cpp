#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int input;
            cin >> input;
            if (input == 1) {
                cout << abs(2 - i) + abs(2 - j) << "\n";
            }
        }
    }

}
