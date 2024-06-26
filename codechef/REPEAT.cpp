#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K, S;
    std::cin >> N >> K >> S;
    /*
      ======================================
        Chef has an array of (N + K - 1)
        integers. The array contains only the
        first N positive odd numbers. Each
        number appears exactly once, except
        for one number which appears exactly K
        times. The sum of integers in Chef's
        array is equal to S. For example:

        For N = 3, K = 2, the possible arrays
        could be [1, 1, 3, 5], [3, 1, 3, 5],
        [5, 3, 5, 1] for N = 1, K = 3, there is
        only one possible array: [1, 1, 1].

        Chef gives you three integers N, K and S
        and asks you to find the only element
        which appears K times in his array.
        It is guaranteed that for the given
        input, there exists a valid array
        consisting of N + K - 1 elements with
        a sum exactly equal to S.
      ======================================
    */
    long long answer = (S - N * N) / (K - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
