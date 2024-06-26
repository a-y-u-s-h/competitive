#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X1, Y1, X2, Y2;
    std::cin >> X1 >> Y1 >> X2 >> Y2;
    /*
      ======================================
        Chef has 2 style options available:
        1. Tiling (cost: X1) + Painting (cost: Y1)
        2. Tiling (cost: X2) + Painting (Cost: Y2)
        Chef will choose whichever has lower
        total cost. How much will Chef have to
        pay?
      ======================================
    */
    int answer = (X1  + Y1 <= X2 + Y2) ? X1 + Y1 : X2 + Y2;
    std::cout << answer << std::endl;
  }
  return 0;
}
