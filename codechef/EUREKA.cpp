#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N;
    std::cin >> N;
    /*
      ======================================
        Simply calculate the equation given
        in the problem statement and answer.
      ======================================
    */

    double configurations = std::pow(0.143 * N, N);
    long long answer = (configurations - std::floor(configurations)) < 0.5 ? std::floor(configurations) : std::floor(configurations) + 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
