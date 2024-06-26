#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef has an array A containing N
        integers. The integers of the array
        can be positive, negative or even zero.
        Chef allows you to choose at most K
        elements of the array and multiply by
        -1. Find the maximum sum of a subsequence
        you can obtain if you choose the elements
        of the subsequence optimally.

        Note: A sequence 'a' is a subsequence of
        a sequence 'b' if 'a' can be obtained
        from 'b' by deletion of several (possibly,
        zero or all) elements. Note that, empty
        sequence is also a subsequence.
      ======================================
    */
    A.erase(std::remove_if(std::begin(A), std::end(A), [] (auto const &Ai) { return Ai == 0; }), std::end(A));
    std::sort(std::begin(A), std::end(A));
    std::transform(std::begin(A), std::begin(A) + K, std::begin(A), [](auto const &Ai) { return std::abs(Ai); });
    A.erase(std::remove_if(std::begin(A), std::end(A), [] (auto const &Ai) { return Ai < 0; }), std::end(A));
    int answer = std::accumulate(std::begin(A), std::end(A), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
