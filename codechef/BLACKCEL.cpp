#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  /*
    ======================================
      Given that n is an even number,
      determine number of black cells
      in an n x n chessboard.

      Total number of cells in an n x n
      chessboard = n ^ 2, and half of them
      are black, so answer = (n ^ 2) / 2.
      This is only true when n is even.
    ======================================
  */

  int answer = std::pow(n, 2) / 2;
  std::cout << answer << std::endl;
  return 0;
}
