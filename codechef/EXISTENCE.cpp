#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    unsigned long long X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has two variables X and Y, Chef
        wants to see if they satisfy an
        equation given in problem statement.
      ======================================
    */
    bool condition = X * X == 2 * Y;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
