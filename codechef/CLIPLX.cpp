#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        It's IPL time and as usual RCB are
        finding it tough to qualify for playoffs.
        RCB needs a minimum of X more points to
        qualify for playoffs in their remaining
        Y matches. A win, tie and loss in a match
        will yield 2, 1, 0 points respectively
        to a team.

        You being a true RCB supporter want to find
        the minimum number of matches RCB needs to
        win to qualify for playoffs. It is guaranteed
        that RCB will qualify for playoffs if they
        win all their remaining Y matches.
      ======================================
    */

    int answer = 0;

    int needed = X;
    int possible = Y * 2;
    if (possible <  needed) answer = 0;
    if (possible == needed) answer = Y;
    if (possible >  needed) {
      int draws = possible - needed;
      int wins = needed < draws ? 0 : (needed - draws) / 2;
      answer = wins;
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
