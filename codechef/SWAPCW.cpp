#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Chef is working on his swap-based
        sorting algorithm for strings.
        Given a string S of length N, he
        wants to know whether he can sort
        the string using his algorithm.
        According to the algorithm, one
        can perform the following number
        of operations on string S any
        number of times:

        Choose some index i (1 <= i <= N) and
        swap the ith character from the front
        and the ith character from the back.
        More formally, choose an index i and
        swap Si and S(N + 1 - i).

        For example, `dcba` can be converted
        to `abcd` using one operation
        where i = 1. Help Chef find if it
        is possible to sort the string using
        any (possibly zero) number of operations.
      ======================================
    */
    std::string O (S);
    std::sort(std::begin(O), std::end(O));

    bool condition = std::is_sorted(std::begin(S), std::end(S)) || std::is_sorted(std::begin(S), std::end(S), std::greater<int>());

    if (!condition) {
      for (int i = 1; i <= N; i += 1) {
        if (i < N + 1 - i) {
          char SL = S[i - 1], SR = S[N + 1 - i - 1];
          char OL = O[i - 1], OR = O[N + 1 - i - 1];
          condition = (OL == SL && OR == SR) || (OL == SR && OR == SL);
          if (condition) { continue; } else { break; }
        }
      }
    }

    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
