#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t E, K;
    std::cin >> E >> K;

    /*
      ======================================
        In Chefland, energy is lost as
        metabolic heat when organisms from one
        trophic level are consumed by the next level.

        Initially, if the energy is X then transfer
        of energy to the next tropic level is floor(X / K).
        This limits the length of foodchain which is
        defined to be the highest level recieving non-zero
        energy.

        E is the energy at lowest trophic level. Given
        E and K we need to find the maximum length of foodchain.

        Example:

        If the energy at first level is 5 (E) units and K is 3.
        For the second level energy becomes ⌊5 / 3⌋ = 1 units.
        So the length of foodchain is 2 since
        from the next level onwards 0 units of
        energy will be received.

      ======================================
    */

    int length = 1;
    while (E > 0) {
      E = std::floor(E / K);
      if (E > 0) length++;
    }
    std::cout << length << std::endl;
  }
  return 0;
}
