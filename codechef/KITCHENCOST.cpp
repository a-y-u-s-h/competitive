#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> A;
    std::vector<int> B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        Chef visited a grocery store for
        fresh supplies. There are N items in
        the store where the i-th item has
        a freshness value Ai and cost Bi.
        Chef has decided to purchase all the
        items having a freshness value greater
        than equal to X. Find the total cost
        of the groceries Chef buys.
      ======================================
    */
    int answer = 0;
    for (int i = 0; i < N; i += 1) { if (A[i] >= X) answer += B[i];  }
    std::cout << answer << std::endl;
  }
  return 0;
}
