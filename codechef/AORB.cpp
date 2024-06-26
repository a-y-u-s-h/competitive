#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        There are 2 problems in a contest.
        Problem A is worth 500 points and B
        is worth 1000 points at the start of
        the contest. Once contest starts, after
        each minute - Maximum points of problem
        A reduces by 2 points and Maximum points
        of problem B reduces by 4 points. It
        is known that Chef requires X minutes to
        solve problem A correctly and Y minutes
        to solve problem B correctly. Find
        the maximum number of points Chef can
        score if he optimally decides the order
        of attempting both problems.
      ======================================
    */

    int Pa = (500  - (2 * X)) + (1000 - (4 * (X + Y)));
    int Pb = (1000 - (4 * Y)) + (500  - (2 * (X + Y)));
    int score = Pa > Pb ? Pa : Pb;
    std::cout << score << std::endl;

  }
  return 0;
}
