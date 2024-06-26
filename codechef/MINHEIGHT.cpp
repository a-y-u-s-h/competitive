#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, H;
    std::cin >> X >> H;
    /*
      ======================================
        Chef's son wants to go on a roller
        coaster ride. The height of Chef's son
        is X inches, while the minimum height
        required to go on the ride is H. Determine
        whether he can go on the ride or not.
      ======================================
    */
   bool eligible = (X >= H);
   std::cout << (eligible ? "YES" : "NO") << std::endl;
  }
  return 0;
}
