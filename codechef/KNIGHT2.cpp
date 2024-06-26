#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X1, Y1, X2, Y2;
    std::cin >> X1 >> Y1 >> X2 >> Y2;
    /*
      ======================================
        Chef has an 8x8 chessboard. He placed
        the knight on the square (X1, Y1).
        Note that, the square at the intersection
        of the ith row and jth column is denoted
        by (i, j). Chef wants to determine whether
        the knight can end up at the square (X2, Y2)
        in exactly 100 moves or not. For reference,
        a knight can move to a square which is:

        1. One square horizontally and two squares
        verically away from the current square or...
        2. One square vertically and two squares
        horizontally away from the current square...
      ======================================
    */
    int Px1 = X1 % 2;
    int Py1 = Y1 % 2;
    int Px2 = X2 % 2;
    int Py2 = Y2 % 2;

    bool condition = (Px1 == Py1) ? (Px2 == Py2)
                   : (Px1 != Py1) ? (Px2 != Py2)
                   : false;

    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
