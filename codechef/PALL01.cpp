#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        Convert given number into string,
        reverse that string (by copying it first
        and then reversing the copy) and check whether
        the reversed string is equal to the
        normal string, and print based on problem.
      ======================================
    */
    std::string number = std::to_string(N);
    std::string reversed(number);
    std::reverse(std::begin(reversed), std::end(reversed));
    std::cout << ((number == reversed) ? "wins" : "loses") << std::endl;
  }
  return 0;
}
