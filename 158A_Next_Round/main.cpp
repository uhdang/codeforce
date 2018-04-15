#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int a[n];

  vector<int> v;

  for (int j = 0; j < n; j++) {
    int e;
    cin >> e;
    a[j] = e;
  }

  int value_for_kth_place = a[k -1];
  //cout << "value for kth place: " << value_for_kth_place << "\n";
  

  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] >= value_for_kth_place) {
      v.push_back(a[i]);
    }
  }

  cout << v.size() << "\n";

  return 0;
}
