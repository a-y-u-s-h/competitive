#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, X, Y;
    std::cin >> A >> B >> X >> Y;
    /*
      ======================================
        Chef is setting up a perfect bath
        for himself. He has X litres of hot
        water and Y litres of cold water.
        The initial temperature of water
        in his bathtub is A degrees. On mixing
        water, the temperature of the bathtub
        changes as the following:

        1. Temperature rises by 1 degree on
        mixing 1 litre of hot water.
        2. Temperature drops by 1 degree on
        on mixing 1 litre of cold water.

        Determine whether he can set the
        temperature to B degrees for perfect
        bath.
      ======================================
    */
    std::vector<int> range ((A + X) - (A - Y) + 1); std::iota(std::begin(range), std::end(range), (A - Y));
    bool condition = std::find(std::begin(range), std::end(range), B) != std::end(range);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
