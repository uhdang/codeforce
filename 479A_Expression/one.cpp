#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int array[6] = {a+b+c, a+b*c, a*b*c, a*b+c, (a+b)*c, a*(b+c)};
    cout << *max_element(array, array+6) << "\n";
}

