#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Given A, B and C as the sides of a
        triangle, find whether the triangle
        is scalene. A triangle is said to be
        scalene if all three sides of the
        triangle are distinct. It is guaranteed
        that the sides represent a valid triangle.
      ======================================
    */
    std::set sides = { A, B, C };
    bool condition = sides.size() == 3;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
