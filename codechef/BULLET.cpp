#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Mario's bullet moves X pixels per frame.
        He wishes to shoot a goomba standing
        Y pixels away from him. The goomba
        does not move. Find the minimum time (
        in seconds) after which Mario would shoot
        the bullet, such that it hits the goomba
        after at least Z seconds from now.
      ======================================
    */
    int answer = Z > (Y / X) ? Z - (Y / X) : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
