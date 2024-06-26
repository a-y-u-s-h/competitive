#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, X;
    std::cin >> N >> X;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }

    /*
      ======================================
        You're given an array A of N integers
        and an integer X. Find the maximum
        element in each subarray of size X.
        Print (N - X + 1) space separated
        integers where the i-th integer denotes
        the maximum element of i-th subarray
        of size X from left.
      ======================================
    */

    /*
      ======================================
        The regular solution with max_element
        will give you a TLE, so in order to
        solve the problem with even more
        efficiency, we'll use a deque to
        maintain the indexes of useful elements
        and process the array in O(N) time
        for each test case.
      ======================================
    */
    std::vector<long long> answer; std::deque<int> Q;

    for (long long i = 0; i < N; i += 1) {
      /*
        ======================================
          Remove out of range elements from the
          front of the queue. Then remove all
          elements smaller than the current element
          from the back. Then add the current
          element at the back of the queue. Then, front
          of the deque is the largest element of
          the current window.
        ======================================
      */
      if (!Q.empty() && Q.front() == i - X) { Q.pop_front(); }
      while (!Q.empty() && A[Q.back()] <= A[i]) { Q.pop_back(); }
      Q.push_back(i); if (i >= X - 1) { answer.push_back(A[Q.front()]); }
    }

    for (auto const &a : answer) { std::cout << a << " "; } std::cout << std::endl;

  }
  return 0;
}
