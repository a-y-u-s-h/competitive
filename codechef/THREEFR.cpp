#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        There are 3 friends; let's call them
        A, B and C. They amde the following
        statements:

        A: "I have Rs. x more than B".
        B: "I have Rs. y more than C".
        C: "I have Rs. z more than A".

        You don't know the exact values of
        x, y and z. Instead, you're given their
        absolute values. Note that x, y and z
        may be negative. "Having Rs. (-r) more"
        is same as "Having Rs. r less". Find
        out if there is some way to assign
        amounts of money to A, B, C such that
        all of their statements are true.

        A = B + x
        B = C + y
        C = A + z

        -> A + B + C = A + B + C + x + y + z
        -> x + y + z = 0
        -> |x| = |y + z|, |y| = |x + z|, |z| = |x + y|
        -> X = |x|, Y = |Y|, Z = |z|
        -> X = |y+z|, Y = |x+z|, Z = |x+y|,
        -> X = max(|y|, |z|) +- min(|y|, |z|)
        -> Y = max(|x|, |z|) +- min(|x|, |z|)
        -> Z = max(|x|, |y|) +- min(|x|, |y|)


      ======================================
    */
    std::string answer = (X == std::max(Y, Z) + std::min(Y, Z) || X == std::max(Y, Z) - std::min(Y, Z)) ? "yes"
                       : (Y == std::max(Z, X) + std::min(Z, X) || Y == std::max(Z, X) - std::min(Z, X)) ? "yes"
                       : (Z == std::max(X, Y) + std::min(X, Y) || Z == std::max(X, Y) - std::min(X, Y)) ? "yes"
                       : "no";

    std::cout << answer << std::endl;
  }
  return 0;
}
