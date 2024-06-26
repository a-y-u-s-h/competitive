#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given an N x M matrix, if an element
      is 0, set its entire row and column
      to 0's.
    ======================================
  */
  std::vector<int> rows, cols;
  for (int i = 0; i < A.size(); i++) { for (int j = 0; j < A[i].size(); j++) { if (A[i][j] == 0) { rows.push_back(i); cols.push_back(j); }}}
  for (int i = 0; i < N; i++) { for (auto j = std::begin(cols); j != std::end(cols); j += 1) { A[i][*j] = 0; } }
  for (auto i = std::begin(rows); i != std::end(rows); i += 1) { for (int j = 0; j < M; j++) { A[*i][j] = 0; } }
  for (int i = 0; i < A.size(); i++) { for (int j = 0; j < A[i].size(); j++) { std::cout << A[i][j] << " "; } std::cout << std::endl; }
  return 0;
}
