#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        A problem setter is called an expert
        if at least 50% of their problems are
        approved by Chef. Munchy submitted X
        problems for approval. If Y problems
        out of these were approved, find whether
        Munch is an expert or not.
      ======================================
    */
    bool condition = (Y / X) >= 0.5;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
