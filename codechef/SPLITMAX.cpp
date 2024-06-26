#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> C;
    for (int n = 0; n < N; n++) { int Ci; std::cin >> Ci; C.push_back(Ci); }
    /*
      ======================================
        Let f be a function such that, for
        an array A of size M, f(A) is defined as:
        f(A) = i from 1 to M (then nested inside)
        j from 1 to M, j != i, (Ai * Aj).

        You're given an array C of size N. In
        one operation on the array you can:

        - Choose an index i (1 <= i <= |C|).
        - Select two positive integers X and Y
          such that X + Y = Ci.
        - Remove the element Ci from the array C.
        - Insert the elements X and Y to array C.

        Find the minimum value of f(C) that
        can be obtained using any (possibly zero)
        number of given operations. Since this
        value can be huge, output the answer
        modulo 998244353.
      ======================================
    */
  }
  return 0;
}
