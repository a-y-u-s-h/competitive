#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    /*
      ======================================
        You are given the sizes of angles of
        a simple quadrilateral (in degrees)
        A, B, C and D, in some order along its
        perimeter. Determine whether the
        quadrilateral is cyclic.

        Note: A quadrilateral is cyclic
        if and only if the sum of opposite
        angles is 180∘.
      ======================================
    */

    bool cyclic = (A + C == 180) && (B + D == 180);
    std::cout << (cyclic ? "YES" : "NO") << std::endl;
  }
  return 0;
}
