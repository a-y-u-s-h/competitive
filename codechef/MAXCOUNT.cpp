#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    /*
      ======================================
        Given an array of length N, your task
        is to find the element which repeats
        in A maximum number of times as well
        as the corresponding count, choose
        the smaller element first.
      ======================================
    */
    std::map<int,int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; frequencies[Ai] += 1; }
    int maximum = (*std::max_element(std::begin(frequencies), std::end(frequencies), [](auto const &a, auto const &b) { return b.second > a.second; })).second;
    std::vector<std::pair<int,int>> F; std::copy_if(std::begin(frequencies), std::end(frequencies), std::inserter(F, std::end(F)), [maximum](auto const &Fi) { return Fi.second == maximum; });
    auto answer = *std::min_element(std::begin(F), std::end(F), [](auto const &a, auto const &b) { return b.first > a.first; });
    std::cout << answer.first << " " << answer.second << std::endl;
  }
  return 0;
}
