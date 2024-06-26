#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int W, X, Y, Z;
    std::cin >> W >> X >> Y >> Z;
    /*
      ======================================
        Bob has an account in the Bobby Bank.
        His current account balance is W rupees.

        Each month, the office in which Bob works
        deposits a fixed amount of X rupees to
        his account. Y rupees is deducted from Bob's
        account each month as bank charges.

        Find his final account balance after
        Z months. Note that the account balance
        can be negative as well.
      ======================================
    */
    int answer = W + Z * (X - Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
