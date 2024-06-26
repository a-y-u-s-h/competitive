#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    /*
      ======================================
        Chef is making a dish that consists
        of exactly 2 ingredients. He has 4
        ingredients A, B, C, D with tastiness
        a, b, c, d respectively. He can use
        either A or B as first ingredient and
        either C or D as the second ingredient.
        The tastiness of the dish is the
        sum of tastiness of its ingredients.
        Find the maximum possible tastiness
        of the dish so that chef can prepare.
      ======================================
    */
    int X[2] = { a, b };
    int Y[2] = { c, d };
    int Xmax = *std::max_element(std::begin(X), std::end(X));
    int Ymax = *std::max_element(std::begin(Y), std::end(Y));
    int answer = Xmax + Ymax;
    std::cout << answer << std::endl;
  }
  return 0;
}
