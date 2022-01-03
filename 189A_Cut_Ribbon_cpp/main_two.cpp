#include <iostream>

int main() {
    int n, a, b, c, output = 0;
    std::cin >> n >> a >> b >> c;

    for (int i = 0; i <= n/a; i++) {
        for (int j = 0; j <= n/b; j++) {
            int rest = n - (a * i + b * j);

            if (rest % c == 0 && rest >= 0) {
                int local_output = i + j + (rest / c);
                output = std::max(output, local_output);
            }
        }
    }

    std::cout << output;
}