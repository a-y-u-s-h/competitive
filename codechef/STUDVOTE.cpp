#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    std::map<int, int> votes;
    std::map<int, bool> disqualified;

    /*
      ======================================
        Check for disqualification.
      ======================================
    */

    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);

      if (Ai != n + 1) {
        if (!disqualified.count(Ai)) {
          votes[Ai]++;
        }
      } else {
        votes[Ai] = 0;
        disqualified[Ai] = true;
      }

    }
    /*
      ======================================
        Get student body size.
      ======================================
    */

    int size = std::count_if(std::begin(votes), std::end(votes), [K](auto const &a) { return a.second >= K; });
    std::cout << size << std::endl;

  }
  return 0;
}
