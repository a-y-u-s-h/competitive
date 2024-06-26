#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X1, Y1, X2, Y2;
    std::cin >> X1 >> Y1 >> X2 >> Y2;
    /*
      ======================================
        The chessboard distance for any two
        points (X1, Y1) and (X2, Y2) on cartesian
        plane is defined as max(|X1 - X2|, |Y1 - Y2|)
        You're given two points, calculate their
        chessboard distance.
      ======================================
    */
    int answer = std::max(std::abs(X1 - X2), std::abs(Y1 - Y2));
    std::cout << answer << std::endl;
  }
  return 0;
}
