// num of alphabet : 26
// asci a - 97, z - 122

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int a[26] = {0};
    int c = 0;
    char b[1000]; 
    cin >> b;
    for (int i=1; i<(int)strlen(b); i+=2) {
       a[b[i]-97]++;
       if (a[b[i]-97] == 1) {
           c++;
       }
    }
    cout << c << "\n";

}
