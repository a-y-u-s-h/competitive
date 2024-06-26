#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      There's an ATM machine, initially
      it contains a total of K units of money.
      N people (1...N) want to withdraw money.
      For each valid i, i-th person wants to
      withdraw Ai units of money.
    ======================================
  */
  int T;
  std::cin >> T;

  for (int t = 0; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;

    /*
      ======================================
        For each test case, print a single line
        containing a string with length N.
        For each valid i, the i-th character of
        this string should be '1' if the i-th
        person will successfully withdraw their
        money or '0' otherwise.
      ======================================
    */

    std::vector<int> withdrawals;
    int remaining = K;

    /*
      ======================================
        For every person, you deduct the amount
        from remaining amount, if the result
        comes out to be negative, you add it back
        to the ATM machine's balance and register
        a failed transaction. Otherwise,
        you register a successful transaction.
      ======================================
    */
    for (int i = 0; i < N; i += 1) {
      int Ai;
      std::cin >> Ai;
      remaining -= Ai;
      if (remaining >= 0) {
        withdrawals.push_back(1);
      } else {
        remaining += Ai;
        withdrawals.push_back(0);
      }
    }

    for (int i = 0; i < withdrawals.size(); i += 1) {
      std::cout << withdrawals[i] << "";
    }
    std::cout << std::endl;
  }
  return 0;
}
