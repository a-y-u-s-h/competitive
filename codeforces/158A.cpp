#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, K;
  std::vector<int> a;
  std::cin >> N >> K;
  for (int n = 0; n < N; n++) { int ai; std::cin >> ai; a.push_back(ai); }
  /*
    ======================================
      A total of n participants took part
      in the contest (n >= k) and you already
      know their scores. Calculate how many
      participants will advance to next round.

      "A contestant who earns a score equal
      to or greater than the k-th place finisher's
      score will advance to the next round, as long
      as the contestant earns a positive score..."
      - An exercpt from contest rules.
    ======================================
  */
  auto answer = std::count_if(std::begin(a), std::end(a), [a, K](auto const &ai) { return ai >= a[K - 1] && ai > 0; });
  std::cout << answer << std::endl;
  return 0;
}
