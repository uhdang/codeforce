// either m or n becomes 0 on that person's turn, then that person loses

#include <iostream>

using namespace std;

int main() {
    int m, n, c = 0;
    cin >> n >> m;
    while (m != 0 && n != 0) {
        m--;
        n--;
        c++;
    }
    cout << (c%2 == 0 ? "Malvika" : "Akshat") << "\n";
}
