#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        One day Alice visited Byteland to
        purchase jewels for her upcoming
        wedding anniversary. In Byteland,
        every Jewelry shop has their own
        discount methods to attract the
        customers. One discount method
        called Buy1-Get1 caught Alice's
        attention. That is, Alice buys one
        jewel, then she can get one additional
        jewel with the same color without
        charge by Buy1-Get1.

        Alice lists the needed jewels as a
        string S, each letter denotes one
        jewel, and the same letters denote
        the same colors of jewels, and the
        different letters denote the different
        colors of jewels. The cost of each jewel
        is 1. Your task is to calculate the
        minimum cost for getting all
        the jewels Alice listed.
      ======================================
    */
    std::map<char, int> frequencies; for (auto Si = std::begin(S); Si != std::end(S); Si += 1) { frequencies[*Si]++; }
    std::vector<int> F; std::transform(std::begin(frequencies), std::end(frequencies), std::back_inserter(F), [](auto const &Fi) { return Fi.second % 2 == 0 ? Fi.second / 2 : (Fi.second + 1) / 2; });
    int answer = std::accumulate(std::begin(F), std::end(F), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
