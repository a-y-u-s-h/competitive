#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int X, Y;
  std::cin >> X >> Y;
  /*
    ======================================
      Chef started watching a movie that
      runs for X minutes. Chef has decided
      to watch the first Y minutes of the
      movie at twice the usual speed as
      he was warned by his friends that the
      movie gets interesting only after the
      first Y minutes. How long will Chef
      spend watching the movie in total?
      Note: It is guaranteed that Y is even.
    ======================================
  */
  int answer = (Y / 2) + (X - Y);
  std::cout << answer << std::endl;
  return 0;
}
