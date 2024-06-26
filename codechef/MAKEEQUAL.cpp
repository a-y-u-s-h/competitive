#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<int> A;
    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        Chef has an array of N elements, Chef
        wants to make all the elements of the
        array equal by repeating the following
        move: Choose any integer K between 1
        and N (inclusive). Then choose K distinct
        indices i1, i2, i3, i4, .. ik and then
        increase the values of Ai1, Ai2, Ai3..Aik.
        Find the minimum number of moves required
        to make all the elements of the array equal.
      ======================================
    */

    auto Mb = *std::max_element(std::begin(A), std::end(A));
    std::transform(std::begin(A), std::end(A), std::begin(A), [Mb](auto const &Ai) { return std::abs(Mb - Ai); });
    auto answer = *std::max_element(std::begin(A), std::end(A));
    std::cout << answer << std::endl;
  }
  return 0;
}
