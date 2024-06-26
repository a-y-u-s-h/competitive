#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        In Chefland, a valid phone number
        consists of 5 digits with no leading 0s.
        For example: 98765, 10000 and 71023 are
        all valid phone numbers while 04123, 9231
        and 872319 are not. Chef went to a store
        and purchase N items, where the cost of
        each item is X. Find whether the total
        bill is equivalent to a valid phone number.
      ======================================
    */
    std::string S = std::to_string(N * X);
    bool condition = S[0] != '0' && S.size() == 5;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
