#include <bits/stdc++.h>


int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You are given an integer N. Find if
        it is possible to represent N as the
        sum of several (possibly zero) 2's and
        several (possibly zero) 7's.
        Formally, find if there exist two integers
        X, Y (X, Y ≥ 0) such that 2X + 7Y = N.

        We know that aX + bY = C has integer
        solutions when GCD(a, b) divides C.
        In this case, GCD(2, 7) is 1, which will
        divide any N, so we'll have integer
        solutions (but we cannot guarantee
        non-negativity yet, for that we'll have
        to write Extended Euclidean Algorithm).

        Or we can do pattern recognition,
        and identify that N cannot be 1, 3 or 5.
      ======================================
    */
    bool condition = N != 1 && N != 3 && N != 5;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
