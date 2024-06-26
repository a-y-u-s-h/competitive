#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, P, Q;
    std::cin >> A >> B >> P >> Q;
    /*
      ======================================
        Chef's favorite game is chess. Today,
        he invented a new piece and wants to
        see its strengths. From a cell (X, Y),
        the new piece can move to any cell of
        the chessboard such that its color is
        different from that of (X, Y). The
        new piece is currently located at cell
        (A, B). Chef wants to calculate the
        maximum number of steps required to
        move it to (P, Q).

        Note: A chess is an 8x8 square board,
        where the cell at the intersection
        of the i-th row and j-th column is
        denoted (i, j). Cell (i, j) is colored
        white if (i + j) is even and black if
        (i + j) is odd.
      ======================================
    */
    int Cab = (A + B) % 2;
    int Cpq = (P + Q) % 2;
    int answer = (A == P && B == Q) ? 0 : (Cab == Cpq ? 2 : 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
