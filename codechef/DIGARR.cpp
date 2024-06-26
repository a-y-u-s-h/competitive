#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int D; std::string S;
    std::cin >> D;
    std::cin >> S;
    /*
      ======================================
        Given a positive integer N, we have
        to determine if it is possible to
        rearrange the digits of N (in decimal)
        representation and obtain a multiple
        of 5. For example, if N = 108, we can
        rearrange its digits to construct:
        180 = 36 * 5, which is a multiple of 5.

        => Multiples of 5 end in 0 or 5.
      ======================================
    */
    int C0 = std::count(std::begin(S), std::end(S), '0');
    int C5 = std::count(std::begin(S), std::end(S), '5');
    bool condition = C0 > 0 || C5 > 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
