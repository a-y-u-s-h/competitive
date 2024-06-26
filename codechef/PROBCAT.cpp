#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int x;
    std::cin >> x;
    /*
      ======================================
        Ranges are labelled for x in the
        problem statement, as:
        1. Easy: 1 ≤ x < 100
        2. Medium: 100 ≤ x < 200
        3. Hard: 200 ≤ x ≤ 300
        We just have to print it out.
      ======================================
    */

    bool easy   = 1   <= x && x <   100;
    bool medium = 100 <= x && x <   200;
    bool hard   = 200 <= x && x <=  300;

    if (easy)   std::cout << "Easy"   << std::endl;
    if (medium) std::cout << "Medium" << std::endl;
    if (hard)   std::cout << "Hard"   << std::endl;
  }
  return 0;
}
