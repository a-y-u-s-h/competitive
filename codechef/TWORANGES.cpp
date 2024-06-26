#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    /*
      ======================================
        Chef has two ranges [A, B] and [C, D]
        Chef needs to find the number of integers
        that belong to at least one of the ranges.
        Note: A range [P, Q] contains all the
        integers between and including P and Q.
      ======================================
    */
    std::vector<int> AB (B - A + 1); std::iota(std::begin(AB), std::end(AB), A);
    std::vector<int> CD (D - C + 1); std::iota(std::begin(CD), std::end(CD), C);
    int common = std::count_if(std::begin(AB), std::end(AB), [CD](auto const &x) { return std::find(std::begin(CD), std::end(CD), x) != std::end(CD); });
    int answer = AB.size() + CD.size() - common;
    std::cout << answer << std::endl;
  }
  return 0;
}
