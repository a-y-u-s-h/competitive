#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Read in the first matrix.
    ======================================
  */
  int M1, N1;
  std::cin >> M1 >> N1;
  std::vector<std::vector<int>> A (M1, std::vector<int> (N1));
  for (int i = 0; i < M1; i++) { for (int j = 0; j < N1; j++) { std::cin >> A[i][j]; }}

  /*
    ======================================
      Read in the second matrix.
    ======================================
  */
  int M2, N2;
  std::cin >> M2 >> N2;
  std::vector<std::vector<int>> B (M2, std::vector<int> (N2));
  for (int i = 0; i < M2; i++) { for (int j = 0; j < N2; j++) { std::cin >> B[i][j]; }}

  /*
    ======================================
      Multiply matrices. If M1xN1 are dimensions
      of the first matric and M2xN2 are the
      dimensions of the second matrix, then
      for multiplication to be possible,
      N1 must be equal to M2, and within the
      deepest loop we'll use either of them to
      get the elements of resultant matrix.
    ======================================
  */
  assert(N1 == M2);
  std::vector<std::vector<int>> C (M1, std::vector<int> (N2));
  for (int i = 0; i < M1; i++) { for (int j = 0; j < N2; j++) { for (int k = 0; k < N1; k++) { C[i][j] += A[i][k] * B[k][j]; } }}
  for (int i = 0; i < C.size(); i++) { for (int j = 0; j < C[i].size(); j++) { std::cout << C[i][j] << " "; } std::cout << std::endl; }
  return 0;
}
