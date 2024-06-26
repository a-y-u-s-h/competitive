#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int C, X, Y;
    std::cin >> C >> X >> Y;
    /*
      ======================================
        Chef wants to gift C chocolatess to
        Botswal on his birthday. However
        he has only X chocolates with him.
        The cost of 1 chocolate is Y rupees.
        Find the minimum money in rupees Chef
        needs to spend so that he can gift
        C chocolates to botswal.
      ======================================
    */
    int answer = (X > C ? 0 : (C - X) * Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
