#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float N;
    std::cin >> N;
    /*
      ======================================
        Chef bought N items from a shop.
        Although it is hard to carry all these
        items in hand, so Chef has to buy some
        polybags to store these items. 1 polybag
        can contain at most 10 items. What is
        the minimum number of polybags needed by Chef?
      ======================================
    */
    int answer = std::ceil(N / 10);
    std::cout << answer << std::endl;
  }
  return 0;
}
