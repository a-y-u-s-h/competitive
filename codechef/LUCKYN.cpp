#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string X;
    std::cin >> X;
    /*
      ======================================
        Chef calls a number lucky if it
        contains the digit 7 at least once.
        Given a number X, determine if it is
        a lucky number or not.
      ======================================
    */
    bool condition = std::any_of(std::begin(X), std::end(X), [](auto const &Xi) { return Xi == '7'; });
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
