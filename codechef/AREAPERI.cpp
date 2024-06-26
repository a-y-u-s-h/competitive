#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int L, B;
  std::cin >> L >> B;

  /*
    ======================================
      Straight-forward problem. Find
      out area of perimeter of rectangle
      and print based on which one's greater
      or smaller or equal.
    ======================================
  */

  int area = L * B;
  int perimeter = 2 * (L + B);

  if (area > perimeter) {
    std::cout << "Area" << std::endl;
    std::cout << area << std::endl;
  }
  if (area < perimeter) {
    std::cout << "Peri" << std::endl;
    std::cout << perimeter << std::endl;
  }
  if (area == perimeter) {
    std::cout << "Eq" << std::endl;
    std::cout << area << std::endl;
  }
  return 0;
}
