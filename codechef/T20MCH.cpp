#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int R, O, C;
  std::cin >> R >> O >> C;
  /*
    ======================================
    Chef is playing for a T20 match.
    Rules of T20 Match are as follows -

    * Team A plays for 20 overs.
    * In a single over, a team gets to play
      6 times and in each of these 6 tries, they
      can score a maximum of 6 runs.
    * After team A's 20 overs are finished, team B
      similarly plays for 20 overs and tries to
      get a higher total score than first team. The
      team with higher total score wins the match.

    Chef is in team B and team A has already played
    their 20 overs and have gotten a score of R.
    Chef's team B has started playing and have already
    scored C runs in first O overs. In the remaining
    (20 - 0) overs, we need to find whether it's
    possible for Team B to get a score high enough to
    win the game (determine whether final score can be
    *strictly* greater than R).
    ======================================
  */
  int score = C + (20 - O) * 6 * 6;
  bool possible = score > R;
  std::cout << (possible ? "YES" : "NO") << std::endl;
  return 0;
}
