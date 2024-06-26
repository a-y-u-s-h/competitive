#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    /*
      ======================================
        Pushpa has entered Chefland and wants
        to establish Pushpa-Raj here too. Chefland
        has N towers where the height of i-th
        tower is Hi. To establish Pushpa-Raj,
        Pushpa does the following:

        1. Initially, Pushpa chooses any tower
        i (1 <= i <= N) and lands on the roof
        of that tower.

        2. Let X denote the height of the tower
        Pushpa is currently on, then, Pushpa
        can land on the roof of any tower j
        (1 <= j <= N) such that the height of
        the j-th tower is (X + 1).

        Let i denote the index of the tower
        on which Pushpa lands, then, the height
        of all towers except tower i increases
        by 1 after each jump including the
        initial jump. To establish Pushpa-Raj,
        Pushpa wants to land at the maximum
        height possible. Determine the maximum
        height that Pushpa can reach.
      ======================================
    */
    long long answer = 0; std::unordered_map<long long, long long> H;
    for (long long n = 0; n < N; n++) { long long Hi; std::cin >> Hi; H[Hi]++; }
    for (auto const &[Hi, FHi]: H) { answer = std::max(answer, Hi + FHi - 1); }
    std::cout << answer << std::endl;
  }
  return 0;
}
