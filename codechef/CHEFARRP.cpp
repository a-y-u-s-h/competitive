#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;
    for (int n = 0; n < N; n += 1) {
      int64_t Ai;
      std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        Chef wants to find the number
        of subarrays in the given array for
        which the sum and product are equal.
        We have N representing number of positive
        integers in the array. And then we have
        A containing all elements of the array.

        A subarray is a continous section of an array.
      ======================================
    */
    int64_t answer = 0;

    for (int i = 0; i < N; i += 1) {
      int64_t addition = 0, product = 1;
      /*
        ======================================
          To find out addition and product of
          every subarray, we create this inner
          loop which depends on the incrementing
          value i from outer loop. as i goes from [0, N).
          -> j goes from [i, 0] (subarray is a continuous
          section of an array, each array starts from 0th index):

          i = 0, j : [0, 0]
          i = 1, j : [1, 0]
          i = 2, j : [2, 0]
          i = 3, j : [3, 0]
          ....and afer more such iterations
          i = N - 1, j : [N - 1, 0]
        ======================================
      */
      for (int j = i; j >= 0; j -= 1) {
        addition += A[j];
        product *= A[j];
        if (addition == product) answer++;
      }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
