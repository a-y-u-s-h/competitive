#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N;
  std::cin >> N;
  std::vector<long long> A;
  for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai) ; }

  /*
    ======================================
      Chef loves research! Now he is looking
      for subarray of maximal length with
      non-zero product. Chef has an array
      with N elements: A1, A2, A3,...An.
      Subarray Aij of array A is elements
      from index i to index j: Ai, Ai+1,...Aj.
      Product of subarray Aij is product of
      all its elements from (ith to jth).
    ======================================
  */

  long long maximum = 0;
  long long current = 0;

  for (auto i = std::begin(A); i != std::end(A); i += 1) {
    if (*i != 0) current += 1;
    if (*i == 0 || i == std::end(A) - 1) { maximum = std::max(maximum, current); current = 0; }
  }

  std::cout << maximum << std::endl;

  return 0;
}
