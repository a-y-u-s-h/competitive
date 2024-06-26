#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C, X;
    std::cin >> A >> B >> C >> X;
    /*
      ======================================
        Alice, Bob, and Charlie are contributing
        to buy a Netflix subscription. However,
        Netfix allows only 2 users to share
        a subscription.

        Given that Alice, Bob, and Charlie have
        A,B, and C rupees respectively and a
        Netflix subscription costs X rupees,
        find whether any 2 of them can
        contribute to buy a subscription.
      ======================================
    */
   bool condition = (A + B >= X) || (B + C >= X) || (C + A >= X);
   std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
