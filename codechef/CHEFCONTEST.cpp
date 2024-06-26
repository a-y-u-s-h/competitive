#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, P, Q;
    std::cin >> X >> Y >> P >> Q;
    /*
      ======================================
        Chef and Chefina are competing against
        each other in a programming contest. They
        were both able to solve all the problems
        in the contest, so the winner between them
        must be decided by time penalty. Chef
        solved all the problems in X minutes and
        made P wrong submissions, while Chefina
        solved all the problems in Y minutes and
        made Q wrong submissions. Who won? Or
        was it a draw?. Time penalty is calcualted
        as follows:

        The base time penalty is the time at which
        the final problem was solved (so X for Chef
        and Y for Chefina). Each wrong submission
        adds a penalty of 10 minutes. The winner
        is the person with less penalty time. If they
        both have same penalty it is considered a draw.
      ======================================
    */
    std::string answer = (X + P * 10) < (Y + Q * 10) ? "CHEF"
                       : (X + P * 10) > (Y + Q * 10) ? "CHEFINA"
                       : "DRAW";

    std::cout << answer << std::endl;
  }
  return 0;
}
