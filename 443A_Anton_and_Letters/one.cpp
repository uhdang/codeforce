// num of alphabet : 26
// asci a - 97, z - 122

#include <iostream>

using namespace std;

int main() {
    int a[26] = {0}; 
    int c = 0;
    string s;
    cin >> s;
    for (int i=1; i < (int)s.length();  i+=2) {
       a[s[i]-97]++;
       if (a[s[i]-97] == 1) {
           c++;
       }
    }
    cout << c << "\n";
}
