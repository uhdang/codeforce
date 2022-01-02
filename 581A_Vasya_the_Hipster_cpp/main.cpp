#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int daysWithDiffSocks;
    int daysWithSameSocks;
    if (a == b) {
        daysWithDiffSocks = a;
        daysWithSameSocks = 0;
    } else if (a > b) {
        daysWithDiffSocks = b;
        daysWithSameSocks = (a - b) / 2;
    } else {
        daysWithDiffSocks = a;
        daysWithSameSocks = (b - a) / 2;
    }
    std::cout << daysWithDiffSocks << " " << daysWithSameSocks;
    return 0;
}