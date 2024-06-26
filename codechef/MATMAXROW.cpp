#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Find the row with maximum number of
      1's in a row-wise sorted binary
      matrix. If there are many such rows,
      print the first one. Example is
      shown in the figure provided in the
      problem statement.
    ======================================
  */
  std::vector<int> counts;
  for (int i = 0; i < N; i++) { counts.push_back(std::count(std::begin(A[i]), std::end(A[i]), 1)); }
  auto answer = std::max_element(std::begin(counts), std::end(counts)) - std::begin(counts) + 1;
  std::cout << answer << std::endl;
  return 0;
}
