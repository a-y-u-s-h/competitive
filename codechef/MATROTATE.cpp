#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<std::vector<int>> A (N, std::vector<int> (N));
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given an N x N matrix, rotate it
      90 degrees clockwise. Example is
      provided in the problem statement.

      Basically, for a 3 x 3 matrix:
      1st row becomes 3rd column.
      2nd row becomes 2nd column.
      3rd row becomes 1st column.
    ======================================
  */
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { std::cout << A[N - j - 1][i] << " "; } std::cout << std::endl; }
  return 0;
}
