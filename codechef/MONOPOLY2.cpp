#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int P, Q, R, S;
    std::cin >> P >> Q >> R >> S;
    /*
      ======================================
        There are 4 companies in the market:
        A, B, C, D. A made a profit of P, B
        made a profit of Q, C made a profit or R,
        and D made a profit of S lakh rupees this
        year.

        There is said to be a monopoly
        in the market if the profit made by one
        company is strictly greater than the
        sum of profits made by all other companies.
        Determine if there is a monopoly in the
        market or not.
      ======================================
    */
    bool condition = (P > Q + R + S) || (Q > R + S + P) ||  (R > S + P + Q) ||  (S > P + Q + R);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
