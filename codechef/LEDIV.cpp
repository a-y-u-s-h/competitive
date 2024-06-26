#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        The little elephant from the Zoo of
        Lviv has an array A that consists of
        N positive integers. Let A[i] be the
        i-th number in this array where i goes
        from 1...N/ Find the minimal number X > 1
        such that x is divisor of all integers
        from the array A. More formally, this x
        should satisfy the following rellations:

        A[1] % x == 0, A[2] % x == 0, ... A[N] % x == 0.

        where % is the modulo operation. If
        no such number exists, output -1.
      ======================================
    */
  }
  return 0;
}
