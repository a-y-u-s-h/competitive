#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef has his lunch between [1pm, 4pm]
        Given that the current time is Xpm,
        Find out whether it is lunchtime or not.
      ======================================
    */
    bool condition = X >= 1 && X <= 4;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
