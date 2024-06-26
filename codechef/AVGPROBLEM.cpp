#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Determine whether the average of
        A and B is strictly greater than C.
      ======================================
    */
   bool condition = 0.5 * (A + B) > C;
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
