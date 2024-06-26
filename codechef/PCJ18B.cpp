#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        There's a generic NxN chessboard, we need
        to find the number of squares with
        odd side length on this chessboard.

        For an 8 x 8 chessboard, we have this pattern:

        Number of squares with side 1: (8 - 1 + 1) ^ 2
        Number of squares with side 3: (8 - 3 + 1) ^ 2
        Number of squares with side 5: (8 - 5 + 1) ^ 2
        Number of squares with side 7: (8 - 7 + 1) ^ 2

        So following this, we need to output what's asked.
      ======================================
    */
    int count = 0, odd = 1;
    while (odd <= N) {
      count += std::pow(N - odd + 1, 2);
      odd += 2;
    }
    std::cout << count << std::endl;
  }
  return 0;
}
