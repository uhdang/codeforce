#include <iostream>
using namespace std;

int main() {

  int n;
  string s;
  cin >> n;
  cin >> s;

  int z_count = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0') {
      z_count++;
    }
  }

  cout << n - 2 * min(z_count, n - z_count) << "\n";

}
