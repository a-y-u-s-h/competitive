#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given an N x M matrix, print its
      elements in a spiral fashion (clockwise).
      Example is given in the statement.
    ======================================
  */

  /*
    ======================================
      To print in spiral fashion, first
      print the first row, then last column,
      then last row, then first column and
      then go to a submatrix contained within
      the initial matrix and repeat the
      process, until no element remains.
    ======================================
  */

  for (int T = 0, B = N - 1, L = 0, R = M - 1; T <= B && L <= R;) {
    for (int j = L; j <= R; j += 1) { std::cout << A[T][j] << " "; } T++;
    for (int i = T; i <= B; i += 1) { std::cout << A[i][R] << " "; } R--;
    if (T <= B) { for (int j = R; j >= L; j -= 1) { std::cout << A[B][j] << " "; } B--; }
    if (L <= R) { for (int i = B; i >= T; i -= 1) { std::cout << A[i][L] << " "; } L++; }
  }

  return 0;
}
