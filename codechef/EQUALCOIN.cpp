#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has X coins worth 1 rupee each
        and Y coins worth 2 rupees each. He
        wants to distribute all of these
        X + Y coins to his two sons so that
        the total value of coins received by
        each of them is same. Find out whether
        Chef will be able to do so.
      ======================================
    */
    bool condition = X == 0 ? Y % 2 == 0 : X % 2 == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
