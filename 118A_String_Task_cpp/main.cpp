#include <iostream>
#include <algorithm>
#include <regex>
#include <sstream>
#include <vector>

int main() {
  std::string s;
  std::cin >> s;


  std::transform(s.begin(), s.end(), s.begin(),::tolower);

  std::regex vowels("[aeiouy]");
  std::stringstream result;
  std::regex_replace(std::ostream_iterator<char>(result), s.begin(), s.end(), vowels, "");

  std::string r = result.str();
  std::string outcome;


  for (int i = 0; i < r.size(); i++) {
    outcome += ".";
    outcome += r[i];
  }
  std::cout << outcome << "\n";

  return 0;
}
