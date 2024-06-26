#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K;
    std::cin >> N >> K;
    std::vector<bool> answer;
    /*
      ======================================
        In order to establish dominance amongst
        his friends, Chef has decided that he will
        only walk in large steps of length exactly
        K feet. However, this has presented many
        problems in Chef’s life because there are
        certain distances that he cannot traverse.
        Eg. If his step length is 5 feet, he cannot
        travel a distance of 12 feet. Chef has a
        strict travel plan that he follows on most
        days, but now he is worried that some of
        those distances may become impossible to
        travel. Given N distances, tell Chef
        which ones he cannot travel.
      ======================================
    */
    for (long long n = 0; n < N; n++) {
      long long Di;
      std::cin >> Di;
      answer.push_back(Di % K == 0);
    }

    for (auto i : answer) { std::cout << i; } std::cout << std::endl;

  }
  return 0;
}
