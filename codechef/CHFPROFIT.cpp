#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Some time ago, Chef bought X stocks
        at the cost of Rs. Y each. Today, Chef
        is going to sell all these X stocks at
        Rs. Z. What is the Chef's total profit
        after he sells them?
      ======================================
    */
    int answer = X * (Z - Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
