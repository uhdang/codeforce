#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int a[26] = {0};
    int c = 0;
    char b[1000] = {0};
    cin.getline(b, sizeof(b));

    for (int i=0; i<(int)strlen(b); i++) {


        if (b[i]-97 >= 0 && b[i]-97 < 26 && a[b[i]-97] == 0) {
            a[b[i]-97]++;
            c++;
        }
    }
    cout << c << "\n";

}
