#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N, S;
    std::cin >> N >> S;

    /*
      ======================================
        There are  two numbers T1 and T2
        and they can be anything between 0 to
        N, both inclusive. They are unknown but
        their sum S, is known; T1 + T2 = S.
        You need to find out maximum possible
        absolute difference | T1 - T2 |.

        T1 := [0, N], T2 := [0, N]
        S = T1 + T2, Smax = 2N, Smin = 0
        D = |T1 - T2|, Dmin = 0, Dmax = ?

        DS = (T1.2 - T2.2)
        (D + S).2 = D.2 + S.2 + 2DS = ...
        D = = 2t1  - S, Dmax = 2N - S, provided N >= S,

        because it's given that it's guaranteed that
        there's at least one {T1, T2} such that T1 + T2 = S,
        so if N is strictly smaller than S, then it would mean that
        other number has to be S - N, in that case, their absolute
        difference will be S.

      ======================================
    */
    if (N >= S) std::cout << S << std::endl;
    if (N < S) std::cout << ((2 * N) - S) << std::endl;
  }
  return 0;
}
