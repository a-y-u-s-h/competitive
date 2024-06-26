#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    /*
      ======================================
        You're given an array A1, A2, ... AN.
        of length N. Each distinct element
        appears twice except for one. Find
        that single one.
      ======================================
    */
    long long N;
    std::cin >> N;
    std::map<long long, long long> F;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; F[Ai]++; }
    auto number = *std::find_if(std::begin(F), std::end(F), [](auto const &Fi) { return Fi.second == 1; });
    std::cout << number.first << std::endl;
  }

  return 0;
}
