/*
  ======================================
    Optimization:

    Given an array of length N, we need
    to perform m query over the array.
    In each query, you need to find the
    sum of the elements in the range a to b.

    Without using prefix sum, for each
    query you will iterate over the
    length of array, which will take O(n)
    time. Total m query will make the
    time complexity O (n * m).

    Using prefix sum, you can create a
    prefix sum array in O(n) time. For
    each query, we can find the sum of
    a range in O(1) time, using:
    prefix[b] - prefix[a - 1] as the
    sum of range from a to b. Total m
    query will make the time complexity
    m * O(1) + O(n) = O(m) + O(n).

    We can see above clearly how prefix
    sum helps us to optimize time complexity
    of our code.
  ======================================
*/

#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long N;
  std::cin >> N;
  std::vector<long long> A;
  for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      First, let's calculate prefix sum.
    ======================================
  */
  std::vector<long long> prefix; std::inclusive_scan(std::begin(A), std::end(A), std::back_inserter(prefix), std::plus(), 0LL);

  /*
    ======================================
      Your task is to use the optimized
      algorithm to solve the problem. You're
      given N, A and K (number of queries).
      Next, K lines contain queries with
      integers Ai and Bi.
    ======================================
  */
  long long K;
  std::cin >> K;
  for (long long n = 0; n < K; n++) {
    long long a, b; std::cin >> a >> b;
    long long l = std::min(a - 1, b - 1), r = std::max(a - 1, b - 1);
    if (l == 0)  { std::cout << prefix[r] << std::endl; continue; }
    if (l >  0)  { std::cout << prefix[r] - prefix[l - 1] << std::endl; continue; }
  }

  return 0;
}
