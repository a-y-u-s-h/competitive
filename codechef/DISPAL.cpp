#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Given integers N and X, generate a
        palindrome of length N consisting of
        lowercase English alphabets such that
        the number of distinct characters in
        the palindrome is exactly X.
      ======================================
    */
    std::string alphabets = "abcdefghijklmnopqrstuvwxyz";
    bool possible = X <= (N + 1) / 2;
    if (!possible) { std::cout << -1 << std::endl; continue; }
    std::string result (N, 'a'); for (int i = 0; i < X; i++) { result[i] = result[N - i - 1] = 'a' + i; }
    std::cout << result << std::endl;

  }
  return 0;
}
