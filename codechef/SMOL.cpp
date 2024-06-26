#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    /*
      ======================================
        You're given two integers N and K.
        You may perform the following operation
        any number of times (including zero):
        => Change N to N - K, i.e. subtract K from N.
        Find the smallest non-negative integer
        value of N you can obtain this way.
      ======================================
    */

    int answer = K > 0 ? N - K * std::floor(N / K) : N;
    std::cout << answer << std::endl;
  }
  return 0;
}
