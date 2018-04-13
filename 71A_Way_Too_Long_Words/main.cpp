#include <iostream>
#include <string>

using namespace std;

string shorten(string w) {

  if (w.length() > 10) {
    int between = w.length() - 2;
    string outcome;
    outcome += w[0];
    outcome += to_string(between);
    outcome += w[w.length() - 1];
    return outcome;

  } else {
    return w;
  }

}

int main() {

  int iterate;
  
  cin >> iterate;

  string collect[iterate];

  for (int i = 0; i < iterate; i++) {
    string g;
    cin >> g;
    collect[i] = g;
  }

  for (int j = 0; j < iterate; j++) {
    string h;
    h = shorten(collect[j]);
    cout << h << "\n";
  }

  return 0;
}
