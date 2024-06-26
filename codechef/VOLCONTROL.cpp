#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef is watching TV. Current volume
        of TV is X.

        1. Pressing the VOLUME.UP button of
        the TV remote increases the volume by 1.
        2. Pressing the VOLUME.DOWN button of
        the TV remote decreases the volume by 1.

        Chef wants to change the volume from X to Y.
        Find the minimum number of button presses
        required to do so.
      ======================================
    */
    int answer = std::abs(Y - X);
    std::cout << answer << std::endl;
  }
  return 0;
}
