#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int R1, R2, R3, R4;
    std::cin >> R1 >> R2 >> R3 >> R4;
    /*
      ======================================
        R1, R2, R3, R4 are integers that denote
        judgements of 4 referees. 0 means that
        tennis ball was IN and 1 means that
        tennis ball was OUT. In tennis of Chefland,
        ball is considered IN, if and only if all
        the referees agree that it was IN. Given
        decision of referees, determine whether
        the ball was IN or OUT.
      ======================================
    */
    std::vector<int> decisions = { R1, R2, R3, R4 };
    int C0 = std::count(begin(decisions), end(decisions), 0);
    std::cout << (C0 == 4 ? "IN" : "OUT") << std::endl;
  }
  return 0;
}
