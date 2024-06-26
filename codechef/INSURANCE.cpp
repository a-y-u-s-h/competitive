#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef bought car insurance. The policy
        of insurance is:
        1. Maximum rebatable amount for any
        damage is Rs. X lakhs.
        2. If the amount required for repairing
        the damage <= X lakhs, the amount is
        rebated in full.

        Chef's car meets an accident and required
        Y lakhs for repairing. Determine the
        amount that will be rebated by the
        insurance company.
      ======================================
    */
    int answer = (Y <= X ? Y : X);
    std::cout << answer << std::endl;
  }
  return 0;
}
