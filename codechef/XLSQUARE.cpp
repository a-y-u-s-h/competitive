#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, A;
    std::cin >> N >> A;
    /*
      ======================================
        You're given N identical squares, each
        with side length A. All the squares
        have their sides parallel to the x-axis
        and y-axis. That is, squares are not
        tilted. You have to take several
        (possibly, 0 or all) squares and rearrange
        them to obtain a mega square. The mega
        square can't have any gap in the enclosed
        region or have overlapping squares. Also,
        you cannot rotate any square. Output
        the side length of the largest mega square
        that you can obtain.

        Area, = NA^2. If you want to make a square
        of side length, 2A - you'll be using area: 4A^2.
        So, you can make maximum side length of
        floor(sqrt(N)) * A with given resources.
      ======================================
    */
    int answer = std::floor(std::sqrt(N)) * A;
    std::cout << answer << std::endl;
  }
  return 0;
}
