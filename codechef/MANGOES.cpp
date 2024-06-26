#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        You're given that a mango weighs X
        kgs and a truck weighs Y kgs. You
        want to cross a bridge that
        can withstand a weight of Z kgs.
        Find the maximum number of mangoes
        you can load in the truck so that
        you can cross the bridge safely.
      ======================================
    */
    int answer = (Z - Y) / X;
    std::cout << answer << std::endl;
  }
  return 0;
}
