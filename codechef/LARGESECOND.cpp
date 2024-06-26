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
        You're given an array A of N integers.
        Find the maximum sum of two distinct
        integers in the array. Note: It is
        guaranteed that there exists at least
        two distinct integers in the array.
      ======================================
    */
    std::map<int, int> frequencies;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); frequencies[Ai]++; }
    std::vector<std::pair<int, int>> F; std::copy(std::begin(frequencies), std::end(frequencies), std::back_inserter(F));
    std::sort(std::begin(F), std::end(F), [] (auto const &a, auto const &b) { return a.first > b.first; });
    std::cout << F[0].first + F[1].first << std::endl;
  }
  return 0;
}
