#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Ranges of X (X is a number from 1-10)
        determine the spiciness label assigned
        to an item in Chef's menu. X is given,
        figure out whether the item is
        1. MILD   (X < 4).
        2. MEDIUM (X >= 4 && X < 7)
        3. HOT    (X >= 7)
      ======================================
    */
    std::string answer = (X < 4)  ? "MILD"
              : (X >= 4 && X < 7) ? "MEDIUM"
              : (X >= 7)          ? "HOT"
              : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
