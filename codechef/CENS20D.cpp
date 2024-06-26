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
        Priya loves bitwise AND but she hates
        programming. Help her solve this problem.
        Given an array A of size N, let Bij
        denote the bitwise AND of Ai and Aj.
        You have to find the number of pairs
        (i, j) such that i < j and Bij = Ai.
      ======================================
    */
   int answer = 0;

    for (auto Ai = std::begin(A); Ai != std::end(A); Ai += 1) {
      for (auto Aj = Ai + 1; Aj != std::end(A); Aj += 1) {
        int Bij = (*Ai) & (*Aj);
        if (Bij == *Ai) answer++;
      }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
