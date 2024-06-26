#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      In the first line, given an integer
      N, the length of an array. In
      the second line, given N integers
      in an array A1, A2, A3...An. Print
      the prefix sum of the array.
    ======================================
  */
  std::vector<int> prefix; std::partial_sum(std::begin(A), std::end(A), std::back_inserter(prefix));
  for (auto const &p : prefix) { std::cout << p << " "; } std::cout << std::endl;
  return 0;
}
