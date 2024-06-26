#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, K;
  std::cin >> N >> K;
  std::vector<int> A;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  /*
    ======================================
      You're given an array A1, A2,...An.
      A subarray from L to R is good if
      the sum of the elements of this
      subarray is equal to an integer K.
      Find the number of good subarrays
      present in the array.
    ======================================
  */
  std::vector<int> prefix; std::inclusive_scan(std::begin(A), std::end(A), std::back_inserter(prefix), std::plus());

  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if (i == 0 && prefix[j] == K)                 { count++; }
      if (i > 0  && prefix[j] - prefix[i - 1] == K) { count++; }
    }
  }

  std::cout << count << std::endl;

  return 0;
}
