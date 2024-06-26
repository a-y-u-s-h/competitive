#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef wants to become fit for which
        he decidedd to walk to the office and
        return home by walking. It is known
        that Chef's office is X km away from
        his home. If his office is open on 5
        days in a week, find the number of km
        Chef travels through office trips in
        a week.
      ======================================
    */
    int answer = 5 * 2 * X;
    std::cout << answer << std::endl;
  }
  return 0;
}
