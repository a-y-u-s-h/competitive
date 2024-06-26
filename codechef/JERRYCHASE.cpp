#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Jerry is running at X metres per
        second, while Tom is chasing him
        at a speed of Y metres per second.
        Determine whether Tom will be able
        to catch Jerry. (Tom must be faster).
      ======================================
    */
    bool condition = Y > X;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
