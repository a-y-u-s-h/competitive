#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Dazzler has a blank canvas and (N - 1)
        colours numbered from 2 to N. Let B
        denote the beauty of the canvas. The
        beauty of a blank canvas is 1. Dazzler
        paints the canvas by using all the (N - 1)
        colours exactly once. On applying the
        i-th colour (2 <= i <= N):

        1) If i is odd , B = B & i
        2) If i is even, B = B ^ i

        Find the beauty of the canvas after
        applying (N - 1) colours. Note: The
        colours are applied in ascending order.
        Colour number 2 is applied first. The
        i-th numbered colour is applied after
        (i-1)-th numbered colour for all i > 2.
      ======================================
    */
  }
  return 0;
}
