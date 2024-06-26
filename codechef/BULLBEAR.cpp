#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef bought a stock at value X and
        sold it at value Y. Help him calculate
        whether he made a profit, loss or was
        it a neutral deal.
      ======================================
    */
    bool profit   = Y - X   >   0;
    bool loss     = Y - X   <   0;
    bool neutral  = Y - X   ==  0;
    std::cout << (profit ? "PROFIT" : loss ? "LOSS" : neutral ? "NEUTRAL" : "") << std::endl;
  }
  return 0;
}
