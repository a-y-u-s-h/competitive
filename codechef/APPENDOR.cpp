#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, Y;
    std::cin >> N >> Y;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef has an array A of length N.
        Chef wants to append a non-negative
        integer X to the array A such that
        bitwise OR of the entire array becomes
        Y (i.e. A1 | A2 | A3 | A4... An | X = Y).
        Determine the minimum possible value
        of X. If no possible value of X exists,
        output -1.
      ======================================
    */

    /*
      ======================================
        Calculate C, the OR of entire array.
        If it is a submask of Y, then it'll
        not allow any X to exist such that
        C | X becomes Y, because it may
        contain bits that are not present in Y.
        So we have to check if it is a submask
        or not. If it is not a submask, we proceed
        with regular logic by multiplying
        (~C &) on both sides of equation.
      ======================================
    */
    int C = std::accumulate(std::begin(A), std::end(A), 0, [] (int a, auto const &b) { return a | b; });
    if ((C & Y) != C) { std::cout << -1 << std::endl; continue; }
    int X = (~C) & Y;
    std::cout << X << std::endl;
  }
  return 0;
}
