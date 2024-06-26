#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int W, X, Y, Z;
    std::cin >> W >> X >> Y >> Z;
    /*
      ======================================
        Chef is playing with weights. He has
        an object weighing W units. He also
        has three weights each of X, Y, Z
        units respectively. Help him determine
        whether he can measure the exact weight
        of the object with one or more of
        these weights.
      ======================================
    */
    bool condition = (W == X || W == Y || W == Z)
                  || (W == X + Y || W == Y + Z || W == Z + X)
                  || (W == X + Y + Z);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
