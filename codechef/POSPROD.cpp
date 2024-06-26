#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given an array A of length N.
        Find the number of pair of indices,
        (i, j) such that. 1 <= i < j <= N
        Ai * Aj > 0.
      ======================================
    */
    double Cp = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai > 0; });
    double Cn = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai < 0; });
    long long answer = (Cp * (Cp - 1) / 2) + (Cn * (Cn - 1) / 2);
    std::cout << answer << std::endl;
  }
  return 0;
}
