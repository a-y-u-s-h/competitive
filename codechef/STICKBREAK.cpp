#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long L, K;
    std::cin >> L >> K;
    /*
      ======================================
        L is initial length of the stick
        and K is the number of parts that
        Chef wants to break the stick into such
        that each part has a non-zero integer length.
        Let the lengths of the K parts be:
        { A1, A2, A3, ... Ai, ... Ak }. Chef
        wants to minimize the value of
        |A(i+1) - Ai| for i = 1 to K-1.
        Under given constraints it will always
        be possible to break the stick into K parts
        of non-zero lengths. It is given that
        (1 <= K <= L <= 10^9)

        |a - b| = max(a, b) - min(a, b)
      ======================================
    */
    long long answer = L % K == 0 ? 0 : 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
