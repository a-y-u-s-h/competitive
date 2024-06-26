#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef has infinite coins of denominations
        of rupees 5 and rupees 10. Find the
        minimum number of coins Chef needs, to
        pay exactly X rupees. If it is impossibile
        to pay X rupees in denominations of rupees 5
        and 10 only, print -1.
      ======================================
    */
    int answer = X % 2 == 0 && X % 5 == 0 ? (X / 10)
               : X % 2 != 0 && X % 5 == 0 ? (X / 10) + (X % 10) / 5
               : -1;
    std::cout << answer << std::endl;
  }
  return 0;
}
