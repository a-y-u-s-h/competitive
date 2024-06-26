#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      You're given an array A of size N, find
      and print all the peak elements in
      the array. A peak element is one
      which is strictly greater than any
      of its adjacent elements.
    ======================================
  */

  if (N == 1) std::cout << A[0] << std::endl;
  if (N == 2) std::cout << (A[0] > A[1] ? A[0] : A[1] > A[0] ? A[1] : -1) << std::endl;

  if (N > 2) {
    bool FP = false, MP = false, LP = false;
    if (A.front() > A[1]) { FP = true; std::cout << A[0] << " "; }
    for (int i = 0; i < N - 3 + 1; i += 1) { int L = A[i], M = A[i + 1], R = A[i + 2]; if (M > L && M > R) { MP = true; std::cout << M << " "; }}
    if (A.back() > A[N - 2]) { LP = true; std::cout << A[N - 1] << std::endl; }
    if (!FP && !LP && !MP) std::cout << -1 << std::endl;
  }

  return 0;
}
