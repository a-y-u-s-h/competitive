#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int X, A, B;
    std::cin >> X >> A >> B;
    /*
      ======================================
        * Solubility (Sx) at initial conditions
          (temperature X, provided) is provided
          as A (grams per 100mL).

        * For a unit rise in temperature, S
          increases by B (grams per 100mL), so S
          at any arbitrary temperature Y would be:
          Sy = Sx + (B * (Y - X)) grams per 100mL.

        * Maximum possible temperature (Xmax)
          is given as 100. And Chef has 1000mL of water.

        Given this, we need to find the maximum amount
        of sugar in grams that can be dissolved under
        in 1000mL water given conditions: (Sy * 10)
      ======================================
    */
    int Xmax = 100;
    int Sy = A + (B * (Xmax - X));
    int answer = Sy * 10;
    std::cout << answer << std::endl;
  }
  return 0;
}
