#include <iostream>
using namespace std;

int main() {
    int array_size;
    cin >> array_size;
    int num_array[array_size];

    for (int i = 0; i < array_size; i++) {
        int elem;
        cin >> elem;
        num_array[i] = elem;
    }

    cout << num_array << "\n";

    return 0;
}