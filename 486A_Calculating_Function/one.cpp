#include <iostream>

using namespace std;

int main() {
    signed long long int n;
    cin >> n;
    cout << (n % 2 == 0 ? n/2 : n/2-n) << "\n";
}
