// 31 ms

#include<iostream>

int main() {
    int n, a, b, c, d = 1, e, i, j;
    std::cin >> n >> a >> b >> c;
    for (i = 0; i <= 4000; i++)
        for (j = 0; j <= 4000; j++) {
            e = n - a * i - b * j;
            if (e >= 0 && e % c == 0) {
                int d_v = i + j + e / c;

                d = std::max(d, d_v);
            }
        }
    std::cout << d;;
}