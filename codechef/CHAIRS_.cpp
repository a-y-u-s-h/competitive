#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        X students will need X chairs to sit.
        Chef already has Y chairs in his class.
        Determine the minimum number of new
        chairs that Chef must buy so that every
        student is able to get one chair to sit on.
      ======================================
    */
    int chairs = X > Y ? X - Y : 0;
    std::cout << chairs << std::endl;
  }
  return 0;
}
