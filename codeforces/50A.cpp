#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int M, N;
  std::cin >> M >> N;
  /*
    ======================================
      You're given a rectangular board of
      MxN squares. Also you're given an
      unlimited number of standard domino
      pieces of 2x1 squares. You're allowed
      to rotate the pieces. You're asked to
      place as many dominoes as possible
      on the board so as to meet the following
      conditions:
      1. Each domino complete covers two squares.
      2. No two dominoes overlap.
      3. Each domino lies entirely inside the
      board. It's allowde to touch the edges
      of the board.

      Find the maximum number of dominoes,
      which can be placed under these restrictions.
    ======================================
  */
  int answer = std::floor(M * N / 2);
  std::cout << answer << std::endl;
  return 0;
}
