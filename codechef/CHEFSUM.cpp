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
        Our little Chef is fond of doing
        additions/sums in his free time. Today,
        he has an array A consisting of N positive
        intgers and he will compute prefix and
        suffix sums over this array.

        He first defines two functions prefixSum(i)
        and suffixSum(i) for the array as
        follows. The function prefixSum(i) denotes
        the sum of first i numbers of the array.
        Similarly, he defines suffixSum(i) as
        the sum of last N - i + 1 numbers of the array.

        Little Chef is interested in finding
        the minimum index i for which the value
        prefixSum(i) + suffixSum(i) is the minimum.
        In other words, first you should minimize
        the value of prefixSum(i) + suffixSum(i)
        and then find the least index i for which
        this value is attained.

        Since, he is very busy preparing the
        dishes for the guests, can you help him
        solve this problem?
      ======================================
    */
    long long index = 0, total = 0, Tn = std::accumulate(std::begin(A), std::end(A), 0);

    for (long long i = 1; i <= N; i += 1) {
      long long Ti = Tn + A[i - 1];
      if (i == 1) { index = i; total = Ti; }
      if (Ti < total) { index = i; total = Ti; }
    }

    std::cout << index << std::endl;
  }
  return 0;
}
