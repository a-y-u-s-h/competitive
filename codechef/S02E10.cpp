#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, K;
    std::vector<int> A, B;
    std::cin >> N >> X >> K;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        Rachel has a date and tells everyone
        she is not mad at Ross but doesn't
        have any feelings for him anymore either.
        Seeing her date for the first time,
        everyone notices that he looks exactly
        like Ross. However, Rachel refuses
        to believe so.

        Rachel makes a list of N characteristics
        and assigns a score to both Ross and
        Russ for each of the characteristics.
        Ross' i-th characteristic has a score
        equal to Ai and Russ' i-th characteristic
        has a score equal to Bi. Rachel decides
        that Russ looks exactly like Ross if
        the following condition is satisfied for
        at least X distinct values of j, 1 ≤ j ≤ N:
        |Aj - Bj| <= K. Help Rachel in finding
        if both are alike.
      ======================================
    */
    int satisfied = 0;
    for (int i = 0; i < N; i += 1) { if (satisfied == X) { break; } if (std::abs(A[i] - B[i]) <= K) { satisfied++; continue; }}
    bool condition = satisfied >= X;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
