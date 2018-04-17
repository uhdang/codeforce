#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int num_implement = 0;
  for (int i = 0; i < n; i++) {
    int p, v, t;
    std::cin >> p >> v >> t;
    if (p+v+t >= 2) {
      num_implement++;
    }
  }
  std::cout << num_implement << "\n";
}
