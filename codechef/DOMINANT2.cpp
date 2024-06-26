#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; frequencies[Ai]++; }
    /*
      ======================================
        You're given an array A of length N.
        An element X is said to be dominant
        if the frequency of X in A is strictly
        greater than the frequency of any
        other element in A. Find
        if there exists any dominant element in A.
      ======================================
    */
    std::vector<std::pair<int, int>> F; std::copy(std::begin(frequencies), std::end(frequencies), std::back_inserter(F));
    auto maximum = *std::max_element(std::begin(F), std::end(F), [] (auto const &a, auto const &b) { return b.second > a.second; });
    int Cm = std::count_if(std::begin(F), std::end(F), [maximum] (auto const &Fi) { return Fi.second == maximum.second; });
    bool condition = Cm == 1;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
