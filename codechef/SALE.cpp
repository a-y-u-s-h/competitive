#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef goes to supermarket to buy some
        items. Luckily there's a sale going
        on under which Chef gets following offer.
        1. If Chef buys 3 items, he gets the item
        (out of those 3) having the lowest price
        as free.
        Chef buys 3 items having A, B, C respectively.
        What is the amount of money that Chef needs
        to pay.
      ======================================
    */
    std::vector<int> prices = { A, B, C };
    std::sort(std::begin(prices), std::end(prices));
    int answer = prices[1] + prices[2];
    std::cout << answer << std::endl;
  }
  return 0;
}
