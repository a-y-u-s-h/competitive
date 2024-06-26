#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        While Alice was drinking sugarcane
        juice, she started wondering about
        the following facts:

        1) The juicer sells each glass of
        sugarcane juice for 50 coins.
        2) He spends 20% of his total income
        on buying sugarcane.
        3) He spends 20% of his total income
        on buying salt and mint leaves.
        4) He spends 30% of his total income
        on shop rent.

        Alice wonders, what is the juicer's
        profit (in coins) when he sells
        N glasses of sugarcane juice?
      ======================================
    */
    int profit = (N * 50) - (N * 50 * (0.2 + 0.2 + 0.3));
    std::cout << profit << std::endl;
  }
  return 0;
}
