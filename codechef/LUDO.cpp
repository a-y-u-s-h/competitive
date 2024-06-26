#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef is playing Ludo. According to the
        rules of Ludo, a player can enter a new
        token into the play only when he rolls
        a 6 on the die.

        In the current turn, Chef rolled the number
        X on the die. Determine if Chef can enter
        a new token into the play in the current
        turn or not.
      ======================================
    */
    bool condition = X == 6;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
