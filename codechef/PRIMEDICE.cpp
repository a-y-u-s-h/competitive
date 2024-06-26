#include <bits/stdc++.h>

bool primality (int N) { for (int i = 2; i < N; i++) { if (N % i == 0) { return false; break; } } return true; }

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Hackerman wants to know who is the
        better player between Bob and Alice
        with the help of a game. The game
        proceeds as follows:

        First, Alice throws a die and gets number A.
        Then, Bob throws a die and gets number B.

        Alice wins the game if the sum on the
        dice is a prime number and Bob wins
        otherwise. Given A and B, determine
        who wins the game.
      ======================================
    */
    std::string answer = primality(A + B) ? "Alice" : "Bob";
    std::cout << answer << std::endl;
  }
  return 0;
}
