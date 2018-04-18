#include <iostream>

int main() {
  int n;
  int x = 0;
  std::cin >> n;

  for (int i = 0; i < n; i++ ) {
    std::string c;
    std::cin >> c;
    if (c == "X++" || c == "++X") {
      x++;
    } else if (c == "X--" || c == "--X") {
      x--;
    }
  }
  std::cout << x << "\n";
}
