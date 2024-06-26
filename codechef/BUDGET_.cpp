#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has X rupees to spend in the
        current month. He spends Y rupees
        per day. Given that current month
        has 30 days, find out if Chef
        has enough money to meet his daily
        expenditures for this month.
      ======================================
    */
    bool condition = X >= (Y * 30);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
