#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given a N x M matrix which is sorted
      in non-increasing order both row-wise
      and column-wise, count the number of
      negative numbers in matrix.
    ======================================
  */
  int answer = 0;
  for (int i = 0; i < A.size(); i++) { for (int j = 0; j < A[i].size(); j++) { if (A[i][j] < 0) answer++; }}
  std::cout << answer << std::endl;
  return 0;
}
