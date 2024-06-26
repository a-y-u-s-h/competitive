#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There is a sale going on in Chefland.
        For every 2 items Chef pays for, he
        gets the third item for free (see
        sample explanations for more clarity).

        It is given that the cost of 1 item is
        X rupees. Find the minimum money required
        by Chef to buy at least N items.
      ======================================
    */
    int answer = (N - (N / 3)) * X;
    std::cout << answer << std::endl;
  }
  return 0;
}
