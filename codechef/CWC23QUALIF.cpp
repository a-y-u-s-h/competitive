#include <iostream>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;

  /*
    ======================================
      X denotes the total points scored
      by the given team in the group stage
      matches. We know that any team that
      scores 12 or more points the group
      stage matches qualifies for next stage.
      We want to ouput if the team has qualified
      for the next stage.
    ======================================
  */

  bool qualified = X >= 12;
  std::cout << (qualified ? "Yes" : "No") << std::endl;

  return 0;
}
