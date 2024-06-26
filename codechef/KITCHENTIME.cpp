#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Working hours of Chef's kitchen are
        from Xpm to Ypm (1 <= X < Y < 12).
        Find the number of hours Chef works.
      ======================================
    */

    std::cout << (Y - X) << std::endl;

  }
  return 0;
}
