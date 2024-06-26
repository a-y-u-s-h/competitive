#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t B;
    std::cin >> B;

    /*
      ======================================
        Maximum number of squares that
        can fit inside a right angled
        isosceles triangle. - Do it like
        how you'd distribute something in some
        other things, find how many, remove
        remainders and proceed.
      ======================================
    */
    int64_t squares = 0;
    while (B > 2) {
      squares += (B - 2) / 2;
      B = B - 2;
    }
    std::cout << squares << std::endl;
  }
  return 0;
}
