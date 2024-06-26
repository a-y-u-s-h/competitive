#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> H;
    for (long long n = 0; n < N; n++) { long long Hi; std::cin >> Hi; H.push_back(Hi); }
    /*
      ======================================
        Given a list of N integers, representing
        height of mountains. Find the height
        of the tallest mountain.
      ======================================
    */
    long long answer = *std::max_element(std::begin(H), std::end(H));
    std::cout << answer << std::endl;
  }
  return 0;
}
