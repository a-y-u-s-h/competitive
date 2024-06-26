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
        You're given an array A of size N.
        In one operation, you can do the
        following: Select indices i and j
        (i != j) and set Ai = Aj.

        Find the minimum number of operations
        required to make all elements of the
        array equal.
      ======================================
    */
    std::vector<std::pair<int,int>> F; std::copy(std::begin(frequencies), std::end(frequencies), std::back_inserter(F));
    auto maximum = *std::max_element(std::begin(F), std::end(F), [] (auto const &a, auto const &b) { return b.second > a.second; });
    F.erase(std::remove_if(std::begin(F), std::end(F), [maximum] (auto const &Fi) { return Fi.first == maximum.first; }), std::end(F));
    int answer = std::accumulate(std::begin(F), std::end(F), 0, [] (int a, auto const &b) { return a + b.second; });
    std::cout << answer << std::endl;
  }
  return 0;
}
