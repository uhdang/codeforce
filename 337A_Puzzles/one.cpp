#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, m, min = 1000;
    cin >> n >> m;
    int array[m];
    for (int i = 0; i < m; i++) {
        int input;
        cin >> input;
        array[i] = input;
    }
    sort(array, array+m);
   
    for (int i = 0; i < (m-n+1); i++) {
        if (array[i+(n-1)] - array[i] < min) {
            min = array[i+(n-1)]-array[i];
        }
    }
    cout << min << "\n";


}
