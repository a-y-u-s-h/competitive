#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Chef is given a number in form of
        its binary representation S, having
        length N. Determine if the number
        can be represented as a sum of exactly
        three non-negative powers of 2. Please
        refer to samples for further explanation.

        (p + q + r) = log2(M);
      ======================================
    */
    int C1 = std::count(std::begin(S), std::end(S), '1');
    bool condition = C1 == 3 || C1 == 2 || (C1 == 1 && N >= 3);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
