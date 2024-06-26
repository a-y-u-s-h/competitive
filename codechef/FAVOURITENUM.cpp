#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Alice likes numbers that are even,
        and are a multiple of 7. Bob likes
        numbers which are odd, and are a
        multiple of 9.

        Alice, Bob and Charlie find a number X.

        If Alice likes X, Alice takes home X.
        If Bob likes X, Bob takes home X.
        If both Alice and Bob don't like X,
        Charlie takes home X. Given X, find
        who takes it home.
      ======================================
    */
    bool A = (X % 2 == 0 && X % 7 == 0);
    bool B = (X % 2 == 1 && X % 9 == 0);
    bool C = !(A || B);

    std::string answer = A ? "Alice"
                       : B ? "Bob"
                       : C ? "Charlie" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
