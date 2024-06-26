#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, Y;
    std::cin >> N >> X >> Y;
    /*
      ======================================
        Chef has started developing an interest
        in playing Chess, and was learning how
        the Queen moves. Chef hass an empty NxN
        chessboard. He places a Queen at (X, Y)
        and wonders - What are the number of cells
        that are under attack by the Queen?

        Notes:

        The top-left cell is (1, 1), the top-right
        cell is (1, N), the bottom-left cell is
        (N, 1) and the bottom-right cell is (N, N).
        The queen can be moved any number of unoccupied
        cells in a straight line vertically,
        horizontally or diagonally. The cell on
        which the queen is present is said not
        to be under attack by the Queen.

        After a lot of calculations, following
        is the equation for squares attacked by
        the queen:
      ======================================
    */
    int answer = 2 * (N - 1) + std::min(X - 1, N - Y) + std::min(N - X, Y - 1) + std::min(X - 1, Y - 1) + std::min(N - X, N - Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
