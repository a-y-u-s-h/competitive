#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int R;
    std::cin >> R;
    /*
      ======================================
        Given Rating R of a person, we need
        to determine which divisiion they
        belong to:

        Division 1: 2000    <= Rating.
        Division 2: 1600    <= Rating <2000.
        Division 3: Rating  < 1600
      ======================================
    */
    if (R >= 2000) std::cout << 1 << std::endl;
    if (R >= 1600 && R < 2000) std::cout << 2 << std::endl;
    if (R < 1600) std::cout << 3 << std::endl;
  }
  return 0;
}
