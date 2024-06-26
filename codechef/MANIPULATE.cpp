#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Ezio can manipulate at most X number
        of guards with the apple of eden.
        Given that there are Y number of guards,
        predict if he can safely manipulate
        all of them.
      ======================================
    */
    bool condition = Y <= X;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
