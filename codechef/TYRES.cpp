#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        N is the number of tyres that the
        manufacturing company has. given that N is even.
        A car requires 4 tyres, a bike requires 2 tyres.
        He wants to manufacture maximum number of cars
        from these tyres and then manufacture bikes
        from remaining tyres.

        Chef's friend wants to buy a bike, so
        if the company produces even one bike, he'll
        be able to buy it. We need to determine
        whether he can purchase the bike or not.
      ======================================
    */

    int cars = N / 4, left = N % 4;
    int bikes = left / 2;
    std::cout << (bikes == 0 ? "NO" : "YES") << std::endl;
  }
  return 0;
}
