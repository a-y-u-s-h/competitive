#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::vector<int> L, G;
    std::cin >> N;
    for (int n = 0; n < N; n++) { int Li; std::cin >> Li; L.push_back(Li);  }
    for (int n = 0; n < N; n++) { int Gi; std::cin >> Gi; G.push_back(Gi);  }

    /*
      ======================================
        We're given finger lengths in L and
        glove sheath lengths in G. We have
        made two maps for two kinds of
        configurations and inserted pairs in it.
        Now we check whether all pairs satisfy
        the condition provided in the question
        and based on it, print the answer.
      ======================================
    */

    std::vector<int> indices (N); std::iota(std::begin(indices), std::end(indices), 0);
    bool NF = std::any_of(std::begin(indices), std::end(indices), [N, L, G](auto const &i) { return ! (L[i] <= G[i]); });
    bool NB = std::any_of(std::begin(indices), std::end(indices), [N, L, G](auto const &i) { return ! (L[i] <= G[N - i - 1]); });


    std::string answer = (!NF  &&  !NB) ? "both"
                       : (NF &&  !NB) ? "back"
                       : (!NF  && NB) ? "front"
                       : (NF && NB) ? "none" : "none";

    std::cout << answer << std::endl;

  }
  return 0;
}
