#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Sonu and Titu are playing tennis
        match. They are playing a "best of N sets"
        match (N is always odd). That means that
        they will play at most N sets and the
        person who has won most sets wins the match.
        But if they notice at any point that one
        of them has no chance of winning the
        match, they will stop the match right then,
        without playing out all the N sets needlessly.

        As an example, if N=15, and the score is currently
        (8,2), then they'll stop right now, since
        there is no way for Titu to win the match.
        Even if Titu wins all the 5 remaining sets,
        Titu cannot win the match.

        You are watching the match, and you see that
        the match has ended with a score of (X,Y).
        That is, Sonu has won X sets, and Titu
        has won Y sets. But you don't know what
        N is. Can you find out N from just knowing
        the final score?

        => X + Y + ? = N
        => X > Y ? X = ceil(N / 2) : Y = ceil(N / 2)
        => N = X > Y ? (2 * X - 1) : (2 * Y - 1)
      ======================================
    */
    int answer = X > Y ? (2 * X - 1) : (2 * Y - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
