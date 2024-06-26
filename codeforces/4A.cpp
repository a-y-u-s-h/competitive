#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int w;
  std::cin >> w;
  /*
    ======================================
      A watermelon weighs `w` kilos. Two
      boys want divide it into two parts
      so that each of the two part has a
      weight that's even. We need to find
      whether it's possible to do that. The
      parts need not be equal.

      Let two parts be X and Y. Then,
      1) X + Y = w
      2) X % 2 == 0 && Y % 2 == 0
      3) w % 2 == 0 && (w / 2) % 2 == 0
      2.1) X % 2 == 0 && (w - X) % 2 == 0

      For all X from 1..w, we can check
      whether such a pair exists for which
      the above conditions are true. If it
      does, we exit with our response.
    ======================================
  */
  bool condition = w % 2 == 0 && w > 2;
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
