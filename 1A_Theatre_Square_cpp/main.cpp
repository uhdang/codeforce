#include <iostream>
using namespace std;

int getNecessaryNum(long int big, long int small) {
  if (big % small == 0) {
    return big / small;
  } else {
    return big / small + 1;
  }
}

int main() {

  long n, m, a;
  cin >> n >> m >> a;

  long long num_n = getNecessaryNum(n, a);
  long long num_m = getNecessaryNum(m, a);
  
  long long outcome = num_n * num_m;
  cout << outcome << "\n";

  return 0;
}

