#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int A, B, C;
  std::cin >> A >> B >> C;
  /*
    ======================================
      Chef has 3 socks in the drawer. Each
      sock has one of 10 possible colors,
      which are represented by integers between
      1 and 10. Specifically the colors of the
      socks are A, B, and C.

      Chef has to wear two socks which have the
      same color, we need to find out if that's
      possible or not.

      => We'll find out the count of each
      sock given to us in the input we've obtained.
      If that count is 2 for any sock, it's
      possible, if it's one for all socks then it's not.
    ======================================
  */
  int input[3] = {A, B, C};
  int Ca = std::count(input, input + 3, A);
  int Cb = std::count(input, input + 3, B);
  int Cc = std::count(input, input + 3, C);
  bool possible = (Ca > 1 || Cb > 1 || Cc > 1);
  std::cout << (possible ? "YES" : "NO") << std::endl;
  return 0;
}
