#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K;
    std::cin >> N >> K;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        JJ has an array A of size N. He can
        perform the following operations on
        the array at most K times:

        1) Set Ai := A(i + 1) where 1 <= i <= N - 1.
        2) Set Ai := A(i - 1) where 2 <= i <= N.

        He wants to maximize the value of the
        minimum element of the array A. Formally,
        he wants to maximize the value of min(A).
        Can you help him do so? K is the
        maximum number of operations allowed.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    auto minimum = std::min_element(std::begin(A), std::end(A));
    auto maximum = std::max_element(std::begin(A), std::end(A));
    long long answer = K >= N ? *maximum : *(minimum + K);
    std::cout << answer << std::endl;
  }
  return 0;
}
