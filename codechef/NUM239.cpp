#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int L, R;
    std::cin >> L >> R;
    /*
      ======================================
        Chef considers a number pretty if
        its last digit is 2, 3 or 9. Chef
        wants to watch numbers between L and R
        (both inclusive), so he asked you
        to determine how many pretty numbers
        are in this range.
      ======================================
    */
    std::vector<int> range (R - L + 1); std::iota(std::begin(range), std::end(range), L);
    auto answer = std::count_if(std::begin(range), std::end(range), [](auto const &x) { return x % 10 == 2 || x % 10 == 3 || x % 10 == 9; });
    std::cout << answer << std::endl;
  }
  return 0;
}
