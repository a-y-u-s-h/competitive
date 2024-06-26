#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  /*
    ======================================
      Given a NxM matrix, print its element
      in a zig-zag fashion, i.e. print
      first row from left to right, second
      row from right to left, third row
      again from left to right and so on..
    ======================================
  */
  std::vector<std::vector<int>> A (N, std::vector<int> (M));
  for (int i = 0; i < N; i++) { for (int j = 0; j < M; j++) { std::cin >> A[i][j]; }}
  for (int n = 0; n < N; n++) { for (int m = 0; m < M; m++) { if (n % 2 == 0) { std::cout << A[n][m] << " "; } else { std::cout << A[n][M - m - 1] << " "; } }}
  std::cout << std::endl;
  return 0;
}
