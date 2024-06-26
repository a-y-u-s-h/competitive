#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Policeman (P) is catching a theif (T)
        who stole Chef's recipe. They move
        on a straight line. Initial location of
        P on number line is X and his speed is
        2 units per second. Initial location of T
        is Y and his speed is 1 unit per second.
        Find the minimum time (in seconds) in
        which the policeman can catch this thief.
        Note: Policeman catches the thief as
        soon as their locations become equal and
        the thief will try to evacde the police
        for as long as possible.
      ======================================
    */
    int answer = std::abs(Y - X) / (2 - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
