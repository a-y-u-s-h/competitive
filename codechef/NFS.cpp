#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int U, V, A,S;
    std::cin >> U >> V >> A >> S;
    /*
      ======================================
        Chef is playing NFS. His car is currently
        running on a straight road with velocity
        U metres per second and approaching a
        90 degree turn which is S metres away
        from him. To successfully cross the turn,
        velocity of the car when entering the
        turn must not exceed V metres per second.

        The breaks of Chef's car allow him to slow
        down with a deceleration (negative acceleration)
        not exceeding A metres per second squared. Tell him,
        whether he can cross the turn successfully.
        The velocity V when entering the term
        can be determined from Newton's 2nd law
        to be v^2 = U^2 + 2 * a * S
      ======================================
    */
    bool condition = std::pow(U, 2) - (2 * A * S) > 0 ? (V >= std::sqrt(std::pow(U, 2) - (2 * A * S))) : true;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
