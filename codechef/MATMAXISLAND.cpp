#include <bits/stdc++.h>

int area (std::vector<std::vector<int>> &matrix, int i, int j) {
  if (i >= 0 && i < matrix.size() && j >= 0 && j <= matrix[0].size() && matrix[i][j] == 1) {
    matrix[i][j] = 0;
    return 1 + area(matrix, i + 1, j) + area(matrix, i - 1, j) + area(matrix, i, j - 1) + area(matrix, i, j + 1);
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given A is a N x M binary matrix
      which represents islands. An island
      is a group of 1's (representing land)
      connected 4-directionally (horizontal
      or vertical). You may assume all four
      edges of the grid are surrounded by water.

      The area of an island is the number
      of cells with a value 1 in the island.
      Return the maximum area of an island
      in matrix. If there is no island,
      return 0. Example is given in the
      problem statement.
    ======================================
  */
  int maximum = 0;
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { if (A[i][j] == 1) maximum = std::max(maximum, area(A, i, j));  }}
  std::cout << maximum << std::endl;
  return 0;
}
