#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  for (int i = A.size() - 1; i >= 0; i--) { for (int j = 0; j < A[i].size(); j++) { std::cout << A[i][j] << " "; } std::cout << std::endl; }
  return 0;
}
