#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        A blood drive aims to collect N
        number of donations. The drive has
        collected X donations so far. Find the
        remaining number of donations needed
        to reach the target.
      ======================================
    */

    std::cout << (N > X ? N - X : 0) << std::endl;

  }
  return 0;
}
