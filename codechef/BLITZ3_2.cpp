#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      There's a 3m+2s (a+b) blitz match, after N
      turns - white has made [(N + 1) / 2]
      moves and black has made [n / 2] moves.
      Game stops after N turns, and white has
      time A seconds left on the clock, while
      black has B seconds left on the clock.
      After Nth turn, the time (2 seconds) is
      still added to the clock of the person who pressed.

      For every test case, we're given N, A, B.
    ======================================
  */
  int t, a = 3 * 60, b = 2;
  std::cin >> t;

  for (int i = 0; i < t; i += 1) {
    int N, A, B;
    std::cin >> N >> A >> B;

    /*
      ======================================
        Provided N, A, B (and a = 3, b = 2) we need to
        find the duration of the game. So, calculate:

        1. Total time added to white's clock. (Tw)
        2. Total time added to black's clock. (Tb)
        3. This will give us total time possible (Tmax),
           then we'll subtract the time that's left
           on the clock to get the duration of the game.
      ======================================
    */
    int Tw = std::floor((N + 1) / 2) * b;
    int Tb = std::floor(N / 2) * b;
    int Tmax = (2 * a) + Tw + Tb;
    int duration = Tmax - (A + B);
    std::cout << duration << std::endl;
  }
  return 0;
}
