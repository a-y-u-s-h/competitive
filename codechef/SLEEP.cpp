#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        A person is said to be sleep deprived
        if he slept strictly less than 7 hours
        a day. Chef was only able to sleep X
        hours yesterday. Determine whether he
        is sleep deprived or not.
      ======================================
    */
    bool condition = X < 7;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
