#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, U, D;
    std::cin >> N >> U >> D;
    std::vector<long long> H;
    for (long long n = 0; n < N; n++) { long long Hi; std::cin >> Hi; H.push_back(Hi); }

    /*
      ======================================
        We want to keep track of position
        of Chef in the whole process. We
        also want to keep track of whether
        parachute is available for use. We'll
        increase position of chef based on
        conditions given to us, and we'll
        open parachute as well likewise.
        Finally we define break conditions
        and exit the loop with hill positions.
      ======================================
    */

    long long position = 1;
    long long parachute = true;

    for (auto i = std::begin(H), j = std::begin(H) + 1; i != std::end(H) && j != std::end(H); i += 1, j += 1) {
      long long a = *i, b = *j;
      if (b >  a && b - a <= U) { position++; continue; }
      if (a == b && a - b == 0) { position++; continue; }
      if (a >  b && a - b <= D) { position++; continue; }
      if (a >  b && a - b  > D && parachute) { position++; parachute = false; continue; }
      if (b >  a && b - a > U) break;
      if (!parachute) break;
    }

    std::cout << position << std::endl;

  }
  return 0;
}
