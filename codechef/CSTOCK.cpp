#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float S, A, B, C;
    std::cin >> S >> A >> B >> C;
    /*
      ======================================
        Chef wants to buy a stock whose
        price was S rupees when the market
        opened. He will buy the sock if and
        only if its price is in the range [A, B].
        The price of the stock has changed by C%
        by the time he was trying to buy the stock.
        Will he be able to buy the stock?
      ======================================
    */
    float changed = S + (S * C / 100);
    bool condition = changed >= A && changed <= B;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
