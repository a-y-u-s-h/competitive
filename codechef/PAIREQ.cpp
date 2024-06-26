#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); frequencies[Ai]++; }
    /*
      ======================================
        Chef has an array A of length N.
        In one operation, Chef can choose
        any distinct indices i, j (1 <= i, j <= N,
        i != j) and either change Ai to Aj or change
        Aj to Ai. Find the minimum number of
        operations required to make all the
        elements of array equal.
      ======================================
    */
    auto maximum = *std::max_element(std::begin(frequencies), std::end(frequencies), [] (auto const &a, auto const &b) { return b.second > a.second; });
    int answer = N - maximum.second;
    std::cout << answer << std::endl;
  }
  return 0;
}
