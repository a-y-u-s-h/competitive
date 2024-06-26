#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given a sequence A1, A2...An
        of positive integers and an integer
        K. You're allowed to perform the
        following operation any number of
        times (including zero):

        - Choose an index j between 1 and N inclusive.
        - Choose a positive divisor d of Aj, such
          that d <= K.
        - Divide Aj by d.

        Determine if it is possible to modify
        the sequence A in such a way that it would
        satisfy the following condition: there
        is no positive integer strictly greater
        than 1 which divides every element of A.
        In other words, the greatest common
        divisor of all elements of A should be 1.
      ======================================
    */
  }
  return 0;
}
