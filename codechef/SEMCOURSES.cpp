#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef took X courses. Each course
        has Y units and each unit has Z
        chapters. Find the total number
        of chapters that Chef needs to study.
      ======================================
    */
    int answer = X * Y * Z;
    std::cout << answer << std::endl;
  }
  return 0;
}
