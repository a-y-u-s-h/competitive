#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Alice has a positive integer N. She
      is wondering how many ordered pairs
      of positive integers (i, j) exist
      such that i + j = N. Help Alice
      figure out the answer.

      Note that since the pairs are ordered,
      (1, 2) and (2, 1) are considered different.
      Note that 0 is not a positive integer.
    ======================================
  */
  int answer = N - 1;
  std::cout << answer << std::endl;
  return 0;
}
