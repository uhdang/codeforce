#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, iterate;
    cin >> n;
    int array[n] = {0};
    int * o;
    for (int i = 0; i < 2; i++) {
        cin >> iterate;
        for (int j = 0; j < iterate; j++) {
            int t;
            cin >> t;
            array[t - 1]++;
        }
    }

    o = find(array, array+n, 0);
    cout << (o != array+n ? "Oh, my keyboard!\n" : "I become the guy.\n");

}
