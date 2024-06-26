#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef has decided to join a Gym in
        ChefLand and if possible, also hire a
        personal trainer at the gym. The
        monthly cost of the gym is X and personal
        training will cost him an additional Y
        per month. Chef's total budget per month
        is only Z.

        Print -
        1 if Chef can only join the gym,
        2 if he can also have a personal trainer, and
        0 if he can't even join the gym.

        Note that if Chef wants to hire a personal
        trainer, he must join the gym — he cannot
        hire the trainer without joining the gym.
      ======================================
    */
    int answer = (X <= Z && X + Y > Z) ? 1
                : (X + Y <= Z)          ? 2
                : (X > Z)               ? 0 : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
