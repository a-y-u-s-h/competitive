#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;

    /*
      ======================================
        Chef has A units of solid and B units
        of liquid. He combines them to create
        mixture. What kind of mixture does Chef
        produce: a solution, solid, or a liquid?
        Conditions are given for each label.
      ======================================
    */

    std::string answer = A == 0          ? "Liquid"
                       : B == 0          ? "Solid"
                       : A > 0 && B > 0  ? "Solution" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
