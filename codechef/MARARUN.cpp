#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int D, d, A, B, C;
    std::cin >> D >> d >> A >> B >> C;
    /*
      ======================================
        Chefland is holding a virtual marathon
        for the categories: 10km, 21km & 42km
        having prizes A, B, C (A < B < C)
        respectively to promote physical fitness.
        In order to claim the prize in a particular
        category the person must cover the total
        distance for that category within D days.
        Also a single person cannot apply in
        multiple categories.

        Given the maximum distance d km that
        Chef can cover in a single day, find
        the maximum prize that Chef can win
        at the end of D days. IF Chef can't win
        any prize, print 0.
      ======================================
    */

    int answer = d * D >= 42 ? C
               : d * D >= 21 ? B
               : d * D >= 10 ? A
               : 0;

    std::cout << answer << std::endl;
  }
  return 0;
}
