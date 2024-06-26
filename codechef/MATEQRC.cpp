#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<std::vector<int>> A (N, std::vector<int> (N));
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given an N x N integer matrix, find
      the number of pairs of row and column
      which are equal. Example is shown in
      the problem statement.
    ======================================
  */
  std::vector<std::vector<int>> B (N, std::vector<int> (N));
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { B[i][j] = A[i][j]; }}
  int answer = 0; for (int i = 0; i < N; i++) { if (A[i] == B[i]) answer++;  }
  std::cout << answer << std::endl;
  return 0;
}
