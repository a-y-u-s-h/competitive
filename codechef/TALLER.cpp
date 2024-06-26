#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Alice's height is X and Bob's is Y.
        And it is guaranteed that X != Y.
        We need to find out who is taller.
      ======================================
    */
    std::cout << (X > Y ? "A" : "B") << std::endl;
  }
  return 0;
}
