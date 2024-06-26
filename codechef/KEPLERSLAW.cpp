#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double T1, T2, R1, R2;
    std::cin >> T1 >> T2 >> R1 >> R2;
    /*
      ======================================
        Kepler's Law states that the planets
        move around the sun in elliptical
        orbits with the sun at one focus.
        Kepler's 3rd law is the law of periods:

        "The square of the time period of the
         planet is directly proportional to
         the cube of the semimajor axis of its
         orbit."

         You're given time periods (T1, T2)
         and semimajor axes (R1, R2) of two
         planets orbiting the same star.

         Please determine if the law of periods
         is satisfied or not, i.e. if the
         constant of proportionality of both
         planets is the same.

      ======================================
    */
    bool condition = (std::pow(T1, 2) / std::pow(R1, 3)) == (std::pow(T2, 2) / std::pow(R2, 3));
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
