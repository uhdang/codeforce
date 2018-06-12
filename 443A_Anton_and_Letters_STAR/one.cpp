// num of alphabet : 26
// asci a - 97, z - 122

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int a[26] = {0};
    int c = 0;
    char b[1000] = {0};
    cin.getline(b, sizeof(b));

    for (int i=0; i<(int)strlen(b); i++) {
        //cout << i << " : " << b[i]-97 << "\n";
        //cout << "before: " << a[b[i]-97] << "\n";
        //cout << "after: " << a[b[i]-97] << "\n";

        if (a[b[i]-97] == 0) {
            a[b[i]-97]++;
            c++;
        //cout << c << "\n";
        }
    }
    cout << c << "\n";

}
