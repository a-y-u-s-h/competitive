#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef is ordering food online (instead
        of cooking) and the bill comes out to
        be Rs. X. Chef can use one of the
        following two coupons to avail a discount:

        1. Get 10 percent off on the bill amount
        2. Get a flat discount of Rs. 100 on the bill amount.

        What is the maximum discount Chef can avail?
      ======================================
    */

    int answer = (X * 0.1 >= 100) ? X * 0.1 : 100;
    std::cout << answer << std::endl;
  }
  return 0;
}
