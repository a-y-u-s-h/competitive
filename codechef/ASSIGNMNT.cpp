#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef has finally decided to complete
        all of his pending assignments.
        There are X assignments where each
        assignment takes Y minutes to complete.
        Find whether Chef would be able to
        complete all the assigments in Z days.
      ======================================
    */
    bool condition = (X * Y) <= (Z * 24 * 60);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
