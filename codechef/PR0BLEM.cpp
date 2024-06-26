#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Initially, Alice has N problems and
        Bob has M problems to solve. Each
        time Alice solves a problem, Bob
        receives one more problem to solve,
        Each time Bob solves a problem, Alice
        receives 3 more problems to solve.
        Find whether it is possible
        that both of them have the same number
        of problems left, if they can
        solve the problems in any
        arbitrary manner.

        N - X + 3Y = M - Y + X
        2Y - 2X = M - N
        (-2) * X + (2) * Y = (M - N)

        Diophantine Equation (aX + bY = C) has
        a solution when C is divisible by GCD(a, b).
      ======================================
    */
    bool answer = (M - N) % std::gcd(-2, 2) == 0;
    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
