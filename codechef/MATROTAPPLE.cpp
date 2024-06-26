#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given an N x M matrix where each cell
      can have one of three values:
      1) 0 representing an empty cell,
      2) 1 representing a fresh apple, or
      3) 2 representing a rotten apple.

      Every minute, any fresh apple that
      is 4-directionally adjacent to a
      rotten apple becomes rotten.
      4-directionally adjacent cells of a cell
      (i, j) are cells (i-1, j), (i+1, j),
      (i, j-1) anad (i, j+1). Find the
      minimum number of minutes that must
      elapse until no cell has a fresh apple.
      If this is impossible, return -1.
    ======================================
  */

  return 0;
}
