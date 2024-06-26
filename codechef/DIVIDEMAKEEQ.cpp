#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Luigi has an array A of N positive
        integers. He wants to make all
        elements of the array equal. In one
        move, he can choose an index (1 <= i <= N)
        and divide the element Ai by one of its
        divisors. Find the minimum number of
        moves required to make all the elements
        of the array equal.
      ======================================
    */
    int GCD = std::accumulate(std::begin(A), std::end(A), A[0], [] (int a, auto const &b) { return std::gcd(a, b); });
    int answer = std::count_if(std::begin(A), std::end(A), [GCD] (auto const &Ai) { return Ai > GCD; });
    std::cout << answer << std::endl;
  }
  return 0;
}
