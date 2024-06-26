#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef earned X rupees, Chefina earned Y.
        It is given that Y > X. Since they want
        to end up with exactly the same amount,
        they decide to donate the difference
        between their income to charity.
        Find out the amount they donate.
      ======================================
    */
    int amount = Y - X;
    std::cout << amount << std::endl;
  }
  return 0;
}
