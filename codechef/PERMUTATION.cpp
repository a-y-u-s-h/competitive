#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N;
    std::cin >> N;
    std::vector<double> A;
    for (double n = 0; n < N; n++) { double Ai; std::cin >> Ai; A.push_back(Ai); }


    /*
      ======================================
        You're given an array A of size N. In
        one operation, you can: choose an index
        i (1 <= i <= N) and increase Ai by 1.
        Find the minimum number of operations
        required to convert array A into
        permutation of size N. If it is impossible
        to do so, print -1. Note that a permutation
        of size N contains each element from 1
        to N exactly once.
      ======================================
    */

    /*
      ======================================
        Check whether there's at least one
        number less than every number between
        1 and N, so that it can be incremented
        and we can derive a permutation of
        1...N out of our given sequence.
      ======================================
    */
    int answer = 0;
    std::sort(std::begin(A), std::end(A));

    for (int i = 0; i < N; i += 1) {
      int difference = i + 1 - A[i];
      if (difference < 0) { answer = -1; break; }
      if (difference > 0) { answer += difference; }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
