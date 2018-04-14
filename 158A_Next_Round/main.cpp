#include <iostream>

using namespace std;

bool untilkthplacepresent(int array[], int n, int k) {
  int counter = 0;

  for (int a = 0; a < n; a++) {
    if (array[a] > array[a+1]) {
      counter++;
    }
  }

  if (counter >= k) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int n, k;
  cin >> n >> k;

  int array[n];

  for (int i = 0; i < n; i++) {
    int e;
    cin >> e;
    array[i] = e;
  }

  // 1.
  if (untilkthplacepresent(array, n, k)) {
    cout << 0 << "\n";
    return 0;
  }

  // 2.
  int kth = k + 1;
  int out = k;

  for (int j = kth; j < n; j++) {
    if (array[j] == array[j+1]) {
      out++;
    }
  }

  cout << out << "\n";
}
