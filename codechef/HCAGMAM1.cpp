#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y; std::string S;
    std::cin >> X >> Y;
    std::cin >> S;
    /*
      ======================================
        Given the schedule of Chef for 30 days
        (a binary string of 30 where '0' denotes
        that Chef was on leave and '1' denotes
        Chef was working on that day). Chef gets
        Rs. X for every day he worked. As working
        continuously for a long time is hectic,
        so Company introduced the following policy
        to give a bonus to its employees.

        The company will check the longest streak
        for which an employee has worked and will
        award Rs. Y for every day of that streak
        as a bonus. Calculate the salary received
        by Chef (including the bonus).

        Note: Rs. represents the currency of
        Chefland, and if there are two or more
        longest streaks of the same length, only
        one is counted for the bonus.
      ======================================
    */
    int C1 = std::count(std::begin(S), std::end(S), '1');
    int C0 = std::count(std::begin(S), std::end(S), '0');

    int streak = 0; int current = 0;
    for (int i = 0; i < S.size(); i += 1) { if (S[i] == '0') { current = 0; } else { current++; streak = std::max(streak, current); }}
    int answer = (C1 * X) + (streak * Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
