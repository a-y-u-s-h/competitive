#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, x, k;
    std::cin >> N >> x >> k;
    /*
      ======================================
        It's a lockdown. You're bored in your
        house and are playing golf in the hallway.
        The hallway has N + 2 tiles numbered from
        0 to N + 1 from left to right. There is
        a hole on tile number x. You hit the
        ball standing on tile 0. When you hit
        the ball, it bounces at lengths of k, i.e.
        the tiles covered by it are 0, k, 2k,...,
        and so on until the ball passes tile N + 1.

        If the ball doesn't enter the hole in
        the first trial, you try again but this
        time standing on the tile N + 1. When
        you hit the ball, it bounces at lengths
        of k, i.e. the tiles covered by it
        are (N + 1), (N + 1 - k), (N + 1 - 2k),...
        and so on until the ball passes tile 0.

        Finnd if the ball will enter the hole,
        either in its forward journey or backward
        journey. Note: The input and output of
        this problem are large, so prefer using
        fast input/output methods.
      ======================================
    */

    /*
      ======================================
        Check if the ball can reach the
        hole in its forward journey.
      ======================================
    */
    bool F = x % k == 0;
    /*
      ======================================
        Check if the ball can reach the
        hole in its reverse journey.
      ======================================
    */
    bool R = x % k == (N + 1) % k;
    /*
       ======================================
         Print out the answers.
       ======================================
    */
    std::cout << (F || R ? "YES" : "NO")<< std::endl;
  }
  return 0;
}
