#include <iostream>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;

  /*
    ======================================
      We're given that S has a length of
      10. We need to find out its 7th
      letter and then output it to screen.
    ======================================
  */

  std::cout << S[7 - 1] << std::endl;

  return 0;
}
