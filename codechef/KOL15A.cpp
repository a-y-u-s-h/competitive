#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Given an alphanumeric string made up
        of digits and lower case Latin characters
        only, find the sum of all the digit
        characters in the string.
      ======================================
    */
    std::vector<char> digits; for (auto c : S) { if (c >= 48 || c <= 57) digits.push_back(std::atoi(&c)); }
    int answer = std::accumulate(std::begin(digits), std::end(digits), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
