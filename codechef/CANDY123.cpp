#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Limak can eat at most A candies.
        Bob can eat at most B candies.

        Limak starts by eating 1 candy. Then
        Bob eats 2 candies, then Limak eats 3
        candies then Bob eats 4 candies and so on.
        If any of them cannot eat what they're
        supposed to eat they lose. We have to
        output the winner.

        Limak = { 1, 3, 5, 7, ...2n -1 } = n * n
        Bob   = { 2, 4, 6, 8, ...2n }    = n * (n + 1)

        This formula checks out:

        1. After 1st turn, Limak will eat (1 * 1) candies,
        and Bob will eat 1 * (1 + 1) candies. So, we need
        to basically solve this quadratic equations for Limak
        and Bob to determine how many turns they'll take to
        eat upto their maximum capacity.

        n ^ 2 = A; n = floor(sqrt(A))
        n ^ 2 + n = B; n = floor((sqrt(1 + 4B) - 1) / 2)
      ======================================
    */
    float An = std::floor(std::sqrt(A));
    float Bn = std::floor((std::sqrt(1 + (4 * B)) - 1) / 2);
    std::cout << (An > Bn ? "Limak" : "Bob") << std::endl;
  }
  return 0;
}
