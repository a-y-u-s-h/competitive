#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> A;
    /*
      ======================================
        In Chefland, there are N houses
        numbered from 1 to N, i-th house has
        a defence system having strength Ai.

        Chef suspects a bomb drop on one of
        the houses very soon. A bomb with attack
        strength X can destroy the i-th house,
        if the defence system of the i-th house
        Ai, is strictly less than X.

        Also, when the i-th house is destroyed
        due to the bomb, all houses with indices
        1 <= j < i get destroyed as well irrespective
        of their defence system.

        Given one bomb with attack strength X,
        find the maximum number of houses that
        can get destroyed.
      ======================================
    */
    int maximum = 0;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; if (Ai < X) maximum = std::max(n + 1, maximum); }
    std::cout << maximum << std::endl;
  }
  return 0;
}
