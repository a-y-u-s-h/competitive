#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, answer = 0;
  std::cin >> N;
  std::vector<std::vector<int>> A (N, std::vector<int> (N));
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { std::cin >> A[i][j]; }}
  for (int i = 0; i < A.size(); i++) { for (int j = 0; j < A[i].size(); j++) { if (j == i || j == A.size() - i - 1) { answer += A[i][j]; }}}
  std::cout << answer << std::endl;
  return 0;
}
