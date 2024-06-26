#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;
  /*
    ======================================
      Playing a musical instrument helps
      in increasing one's IQ by 7 points.
      Chef knows he can't beat Einstein
      in physics, but he wants to beat him
      in IQ competition. Einstein has an
      IQ of 170, Chef currently has an IQ of X.

      Determine if, after learning to play
      a musical instrument, Chef's IQ will
      become strictly greater than Einstein's.
    ======================================
  */
  bool condition = (X + 7 > 170);
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
