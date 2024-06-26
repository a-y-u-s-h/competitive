#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef is deriving weird ways to sort his
        array. Currently he is trying to sort
        his arrays in increasing order by
        reversing some of his subarrays.

        To make it more challenging for himself,
        Chef decides that he can reverse only
        those subarrays that have sum of its elements
        at most X. Soon he notices that it might
        not be always possible to sort the
        array with this condition.

        Can you help the Chef by telling him if
        the given array can be sorted by reversing
        subarrays with sum at most X.

        More formally, for a given array A and
        an integer X, check whether the array can
        be sorted in increasing order by reversing
        some (possibly none) of the subarrays
        such that the sum of all elements of
        the subarray is at most X.
      ======================================
    */

    /*
      ======================================
        If the array is already sorted, move
        on to the next test case.
      ======================================
    */
    bool condition = std::is_sorted(std::begin(A), std::end(A));
    if (condition) { std::cout << "YES" << std::endl; continue; }
    /*
      ======================================
        Otherwise, track the maximum value
        encountered so far. Check if the
        current element and maximum element
        encountered so far can't be in the
        same subarray. And then update the
        maximum. If we can reach the end like
        this without triggering the condition,
        then the whole array is sortable.
      ======================================
    */
    int maximum = 0; condition = true;
    for (int i = 0; i < N; i += 1) { if (maximum > A[i] && maximum + A[i] > X) { condition = false; } maximum = std::max(maximum, A[i]); }
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
