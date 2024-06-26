#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef is playing a mobile game. In the
        game, Chef's character Chefario can
        perform special attacks. However, one
        special attack costs X mana points to Chefario.

        If Chefario currently has Y mana points,
        determine the maximum number of special
        attacks he can perform.
      ======================================
    */
   int answer = (Y / X);
   std::cout << answer << std::endl;
  }
  return 0;
}
