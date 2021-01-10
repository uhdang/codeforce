#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int y;
    bool d = false, r = false;
    cin >> y;
    while (d == false) {
        r = false;
        y++;
        int f[4] = {y/1000%10, y/100%10, y/10%10, y%10};
        sort(f, f + 4);
        for (int i = 0; i < 3; i++) {
            if (f[i] == f[i+1]) {
                r = true;
            }
        }
        if (r == false) {
            d = true;
        }
    }
    cout << y << "\n";
}

