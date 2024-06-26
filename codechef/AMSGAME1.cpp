#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long T;
  std::cin >> T;
  for (long long t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef is playing a game on a sequence
        of N positive integers, say { A1, A2...An },
        the game is played as follows:

        1) If all the numbers are equal, the game ends.
        2) Otherwise:
          2.1) Select two numbers which are unequal.
          2.2) Subtract the smaller number from larger number.
          2.3) Replace the larger number with the
               result from above (see explanation section).

        Chef has already figured out that the game
        always terminates. He also knows, for a given
        sequence of integers, the game will always
        terminate on the same value, no matter how
        the game is played. Chef wants you to simulate
        the game for him and tell him on which value
        will the game terminate for a given sequence
        of integers.

        Approach: The problem will always
        terminate at the GCD of all numbers.
      ======================================
    */

    long long answer = 0;
    for (int i = 0; i < N; i += 1) { answer = std::gcd(answer, A[i]); }
    std::cout << answer << std::endl;
  }
  return 0;
}
