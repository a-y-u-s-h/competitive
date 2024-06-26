#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You are given an integer N. Output a
        permutation of values from 1 to N that
        satisfies the following condition:

        gcd([ 1 + A1, 2 + A2, 3 + A3, ... , N + AN ]) > 1

        It can be proven that a solution always exists.
        If there are multiple permutations that can satisfy
        the condition, then output any one of them.

        * A permutation of values from 1 to N is an
          array containing integers from 1 to N in
          any order but each of them appearing
          exactly once.
      ======================================
    */
    std::vector<int> range(N);
    std::iota(std::begin(range), std::end(range), 1);
    /*
      ======================================
        If GCD of sequence: [1 + A1, 2 + A2, 3 + A3...]
        is greater than 1, it implies that all those numbers
        have some common factor that's not 1. If
        we put A1 = 1, A2 = 2, A3 = 3, ...An = N, we'll
        get the same sequence multipied by 2. So they
        will have GCD 2 for sure. Let's just output
        the range as it is.
      ======================================
    */
    for (int i = 0; i < range.size(); i += 1) std::cout << range[i] << " ";
    std::cout << std::endl;
  }
  return 0;
}
