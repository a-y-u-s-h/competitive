#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t X;
    std::cin >> X;

    /*
      ======================================
        If the number is not already divisible
        by 10, then we go and check whether it's
        divisible by 5.

        If there are any fives in the number
        after first turn it'll get multiplied
        by 2 and become divisible by 10, so we'll
        print 1, otherwise we'll print -1.
      ======================================
    */
    if (X % 10 == 0) std::cout << 0 << std::endl;
    if ((X % 10 != 0) && (X % 5 == 0)) std::cout << 1 << std::endl;
    if ((X % 10 != 0) && (X % 5 != 0)) std::cout << -1 << std::endl;
  }
  return 0;
}
