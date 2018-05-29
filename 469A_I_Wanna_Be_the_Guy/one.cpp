#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, p, q;
    int * o;
    cin >> n >> p;
    int array[n] = {0};
    for (int i = 0; i < n; i++) {
        cout << "t: " << array[i] << "\n";
    }
    for (int i = 0; i < p; i++) {
        int t;
        cin >> t;
        array[t]++;
    } 
    cin >> q;
    for (int j = 0; j < q; j++) {
        int t;
        cin >> t;
        array[t]++;
    }
    o = find(array, array+n, 0);
    cout << o << "\n";

}
