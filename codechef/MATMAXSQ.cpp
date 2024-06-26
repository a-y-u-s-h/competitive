#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<std::vector<int>> A (N, std::vector<int> (N));
  for (int i = 0; i < N; i++) { for (int j = 0; j < N; j++) { std::cin >> A[i][j]; }}
  /*
    ======================================
      Given a N x N binary matrix, find
      the area of maximal square submatrix
      in it which has all 1s. For example,
      in the following matrix, the area of
      maximal submatrix with all 1s is 4
      (2 x 2 submatrix.)
    ======================================
  */

  /*
    ======================================
      So, the approach is to take a sliding
      window of various sizes starting from
      the maximum size N x N, then
      (N - 1 x N - 1)...(N - K x N - K) and
      so on, and also move them as needed,
      and then see if they contain all 1s,
      if window size is S x S, and if they
      do contain all 1s then their sum will
      be (S * S). We can stop at the first
      such matrix we find, because we're
      iterating from larger to smaller and
      every next one will only be smaller.
    ======================================
  */

  int answer = 0; bool found = false;

  for (int K = 0, S = N; K < N; K++, S = N - K) {

    for (int Ox = 0; Ox < N - S + 1; Ox += 1) {
      for (int Oy = 0; Oy < N - S + 1; Oy += 1) {
        int area = 0; for (int i = 0 + Ox; i < S + Ox; i += 1) { for (int j = 0 + Oy; j < S + Oy; j += 1) { area += A[i][j]; }}
        if (area == std::pow(S, 2)) { answer = area; found = true; break; }
      }
      if (found) break;
    }
    if (found) break;
  }

  std::cout << answer << std::endl;

  return 0;
}
