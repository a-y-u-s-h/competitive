#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int P1, P2, P3, P4;
  std::cin >> P1 >> P2 >> P3 >> P4;
  /*
    ======================================
      Most programmers will tell you that
      one of the ways to improve your
      performance in competitive programming
      is to practice a lot of problems.
      Our chef took the above advice very
      seriously and decided to set a target
      for himself.

      * Chef decides to solve at least 10
      problems every week for 4 weeks.

      Given, the number of problems he
      actually solved in each week over
      4 weeks was P1, P2, P3, and P4, output
      the number of weeks in which Chef met his
      target.
    ======================================
  */
  auto verify = [] (int problem) -> int { return problem >= 10 ? 1 : 0; };
  int answer = verify(P1) + verify(P2) + verify(P3) + verify(P4);
  std::cout << answer << std::endl;
  return 0;
}
