#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int p, q;

  /*
    ======================================
      We're given an input matrix, where
      rows and columns are numbered 1 to 5.
      Matrix is 5x5 and 24 of its squares
      are 0, while one of them is 1. We're
      allowed to make swapping operations
      between rows, as well as between
      columns so that we can have the 1
      go in center of the matrix, at (3, 3).
      We need to find out minimum number
      of operations required to do so.
    ======================================
  */
  for (int i = 1; i <= 5; i += 1) {
    for (int j = 1; j <= 5; j += 1) {
      int Aij;
      std::cin >> Aij;
      if (Aij == 1) { p = i; q = j; }
    }
  }

  int answer = std::abs(3 - p) + std::abs(3 - q);
  std::cout << answer << std::endl;

  return 0;
}
