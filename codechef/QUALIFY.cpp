#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, A, B;
    std::cin >> X >> A >> B;
    /*
      ======================================
        In a coding contest, there are two
        kinds of problems: EASY (1 point each)
        and HARD (2 points each). To qualify
        for the next round, a contestant must
        score at least X points. Chef solved A
        EASY problems and B HARD problems.
        Will Chef qualify or not?
      ======================================
    */
    bool condition = (A * 1) + (B * 2) >= X;
    std::cout << (condition ? "QUALIFY" : "NOTQUALIFY") << std::endl;
  }
  return 0;
}
