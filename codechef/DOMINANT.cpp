#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int Na, Nb, Nc;
    std::cin >> Na >> Nb >> Nc;
    /*
      ======================================
        In medevial age, there were 3 kingdoms:
        A, B and C. The army of these kingdom
        had Na, Nb and Nc soldiers respectively.

        You are given that an army with X soldiers
        can defeat an army with Y soldiers only if
        X > Y. An army is said to be dominant if
        it can defeat both the other armies
        combined. Determine whether any
        of the armies are dominant or not.
      ======================================
    */
    bool condition = (Na > Nb + Nc) || (Nb > Nc + Na) || (Nc > Na + Nb);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
