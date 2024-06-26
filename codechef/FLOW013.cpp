#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;

    /*
      ======================================
        If a triangle is a valid triangle,
        sum of all its angles is equal to 180.
      ======================================
    */
    bool valid = (A + B + C) == 180;
    if (valid) std::cout << "YES" << std::endl;
    if (!valid) std::cout << "NO" << std::endl;
  }
  return 0;
}
