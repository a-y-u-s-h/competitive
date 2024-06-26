#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are N members present in the
        parliament of Chefland out of which
        X members voted in favour of the
        resolution and the remaining voted
        against it.

        Resolution will be passed
        if and only if half or more than
        half the members present in the
        parliament vote in favour of the
        resolution. Determine if the resolution
        is passed or not.
      ======================================
    */
    bool condition = X >= (N * 0.5);
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
