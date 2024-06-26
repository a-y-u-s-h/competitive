#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int Amin, Bmin, Cmin, Tmin, A, B, C;
    std::cin >> Amin >> Bmin >> Cmin >> Tmin >> A >> B >> C;
    /*
      ======================================
        Chef was enrolled in 3 courses and
        he scored A, B, C in them. To pass
        the semester in those courses, he must
        score at least Amin, Bmin, Cmin marks along
        with a cumulative score of at least Tmin.
        (A + B + C >= Tmin). We need to tell whether
        Chef has passed the semester or not.
      ======================================
    */
    bool passed = (A >= Amin && B >= Bmin && C >= Cmin) && (A + B + C >= Tmin);
    std::cout << (passed ? "YES" : "NO") << std::endl;
  }
  return 0;
}
