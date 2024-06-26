#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int a, b;
    std::cin >> a >> b;
    /*
      ======================================
        Given the time control of a chess
        match as a+b, determine which format
        of chess out of the given 4 it belongs to.

        1) Bullet     if  a + b < 3
        2) Blitz      if  3 ≤ a + b ≤ 10
        3) Rapid      if  11 ≤ a + b ≤ 60
        4) Classical  if  60 < a + b

        Print the output as asked.
      ======================================
    */
    bool bullet = (a + b) < 3;
    bool blitz = (a + b >= 3) && (a + b <= 10);
    bool rapid = (a + b >= 11) && (a + b <= 60);
    bool classical = (a + b > 60);

    if (bullet) std::cout << 1 << std::endl;
    if (blitz) std::cout << 2 << std::endl;
    if (rapid) std::cout << 3 << std::endl;
    if (classical) std::cout << 4 << std::endl;
  }
  return 0;
}
