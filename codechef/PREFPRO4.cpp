#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N;
  std::cin >> N;
  std::vector<long long> A;
  for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      Given an array consisting of N integers,
      find the number of good subarrays.
      Good subarray A: from Al to Ar is good
      if the sum of elements of this subarray
      is equal to the length of the array.
    ======================================
  */
  std::vector<int> prefix; std::partial_sum(std::begin(A), std::end(A), std::back_inserter(prefix), std::plus());


  /*
    ======================================
      Following approach of using 2-pointers
      will be too slow, so we'll have to use
      Dynamic Programming to store intermediate
      results (prefix sum differences) and
      reuse them to avoid redundant calculations.
      So, this will be slow:

      ```
      long long count = 0;
      for (long long l = 0; l < N; l++) {
        for (long long r = l; r < N; r++) {
          if (l == 0) { count += r - l + 1 == prefix[r]; }
          if (l  > 0) { count += r - l + 1 == prefix[r] - prefix[l - 1]; }
        }
      }
      std::cout << count << std::endl;
      ```
    ======================================
  */

  return 0;
}
