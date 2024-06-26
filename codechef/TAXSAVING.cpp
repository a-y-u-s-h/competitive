#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;

    /*
      ======================================
        In Chefland, anyone who earns more
        than Y per year has to pay tax to
        the Chef. Chef has allowed a special
        scheme where you can invest any amount
        of money and claim excemption for it.
        You have earned X (X > Y) this year.
        Find the minimum amount of money you
        have to invest so that you don't have
        to pay taxes this year.

        Answer: Invest everything that's above Y.
      ======================================
    */

    std::cout << (X - Y) << std::endl;


  }
  return 0;
}
