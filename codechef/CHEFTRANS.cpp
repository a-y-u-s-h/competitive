#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;

    /*
      ======================================
        Chef has two ways to go to his home,
        we need to find which one is faster.
        He can either take a flight from his
        college to an intermediate bus station
        (takes X minutes) and then take a
        bus (Y minutes). Or he can take a direct
        train to his station, which takes Z
        minutes.
      ======================================
    */

    std::string answer = Z < X + Y ? "TRAIN"
                       : Z > X + Y ? "PLANEBUS"
                       : "EQUAL";

    std::cout << answer << std::endl;

  }
  return 0;
}
