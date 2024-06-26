#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  /*
    ======================================
      Given two matrices of same size MxN,
      add them and print resultant matrix.
      Sum of two matrices is sum of their
      corresponding elements.
    ======================================
  */
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  std::vector<std::vector<int>> B (N, std::vector<int> (M));
  for (int n = 0; n < N; n++) { for (int m = 0; m < M; m++) { std::cin >> A[n][m]; }}
  for (int n = 0; n < N; n++) { for (int m = 0; m < M; m++) { std::cin >> B[n][m]; }}

  std::vector<std::vector<int>> result (N, std::vector<int> (M));
  for (int i = 0; i < result.size(); i++) { for (int j = 0; j < result[i].size(); j++) { result[i][j] = A[i][j] + B[i][j]; }}
  for (int i = 0; i < result.size(); i++) { for (int j = 0; j < result[i].size(); j++) { std::cout << result[i][j] << " "; } std::cout << std::endl; }
  return 0;
}
