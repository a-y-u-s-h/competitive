#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> P;
    for (int n = 0; n < N; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    /*
      ======================================
        Chef considers a permutation P of
        {1, 2, 3, …, N} End Sorted if and only if
        P1 = 1 and Pn = N. Chef is given a
        permutation P.

        In one operation Chef can choose any index
        i (1 ≤ i ≤ N−1) and swap Pi and P(i + 1)
        Determine the minimum number of operations
        required by Chef to make the permutation
        P End Sorted.

        Note: An array P is said to be a permutation of
        {1, 2, 3, …, N} if P contains each element of
        {1, 2, 3, …, N} exactly once.
      ======================================
    */
    auto P1 = std::find(std::begin(P), std::end(P), 1);
    auto Pn = std::find(std::begin(P), std::end(P), N);
    auto D1 = std::distance(std::begin(P), P1);
    auto Dn = std::distance(std::end(P)-1, Pn);
    auto D1n = std::distance(Pn, P1);

    int answer = std::abs(Dn) + std::abs(D1) + (D1n > 0 ? -1 : 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
