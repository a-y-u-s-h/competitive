#include <bits/stdc++.h>

int method (std::vector<std::vector<int>>& matrix, std::vector<std::vector<int>>& tracker, int X, int Y, int N, int M) {
  /*
    ======================================
      Base cases. If the value is already
      computed and stored in tracker, you
      can simply return it.
    ======================================
  */
  if (X > N - 1 || Y > M - 1) return INT_MAX;
  if (X == N - 1 && Y == M - 1) return matrix[N - 1][M - 1];
  if (tracker[X][Y] != -1) return tracker[X][Y];

  /*
    ======================================
      Calculate answers from both paths,
      and then track them in a variable.
    ======================================
  */
  int T = method(matrix, tracker, X, Y + 1, N, M);
  int R = method(matrix, tracker, X + 1, Y, N, M);
  tracker[X][Y] = std::min(T, R) + matrix[X][Y];
  return tracker[X][Y];
}

int solution (std::vector<std::vector<int>>& matrix, int N, int M) {
  /*
    ======================================
      Call the recursive function `method`
      with a tracker or a memo variable and
      compute the answers recursively.
    ======================================
  */
  std::vector<std::vector<int>> tracker (N, std::vector<int> (M, -1));
  return method(matrix, tracker, 0, 0, N, M);
}


int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given a N x M matrix with non-negative
      integers, find the minimum sum of path
      cells from top left cell to bottom
      right cell. You can only move right
      or downward from any cell without exiting
      the matrix boundary.
    ======================================
  */
  std::cout << solution(A, N, M) << std::endl;
  return 0;
}
