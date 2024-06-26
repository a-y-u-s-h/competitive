#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int x, m, d;
    std::cin >> x >> m >> d;
    /*
      ======================================
        Chef finishes work that's supposed to
        be finished in x units of time, in m * x
        units of time. Since there's always a limit
        to laziness, he delays the work by at max 'd'
        units of time. Given x, m, d find the maximum
        time taken by Chef to complete the work.

        Time taken by Chef will be equal to minimum
        of (m * x) and (x + d) because, he usually
        takes m * x, but maximum he can take x + d, even
        if m * x is greater.
      ======================================
    */
    int answer = std::min(x + d, m * x);
    std::cout << answer << std::endl;
  }
  return 0;
}
