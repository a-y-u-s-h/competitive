#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int x;
    std::cin >> x;
    /*
      ======================================
        Alice buys a toy with a selling
        price of 100 Rs. There is a discount
        of x percent on the toy. Find the
        amount that Alice needs to pay for it.
      ======================================
    */
    int answer = 100 * (100 - x) / 100;
    std::cout << answer << std::endl;
  }
  return 0;
}
