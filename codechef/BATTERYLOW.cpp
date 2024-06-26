#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef's phone shows a Battery Low
        notification if the battery level is 15%
        or less. Given that the battery level
        of Chef's phone is X%, determine whether
        it would show a Battery low notification.
      ======================================
    */
    bool condition = (X <= 15);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
