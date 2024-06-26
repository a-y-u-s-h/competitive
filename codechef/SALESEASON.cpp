#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef has bought items worth a total
        of X rupees. The sale season offer
        is as follows:
        1. If, X <= 100              , discount = 0
        2. If, X > 100 && X <= 1000  , discount = 25
        3. If, X > 1000 && X <= 5000 , discount = 100
        4. If, X > 5000              , discount = 500
        Find the final amount that Chef needs to pay.
      ======================================
    */
    int payment = (X <= 100)     ? X - 0
      : (X > 100  && X <= 1000)  ? X - 25
      : (X > 1000 && X <= 5000)  ? X - 100
      : (X > 5000)               ? X - 500
      : 0;

    std::cout << payment << std::endl;
  }
  return 0;
}
