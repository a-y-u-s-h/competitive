#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Cricket match is going on between
        two teams - A and B. B is batting
        second and got a target of X runs.
        B team has currently scored Y runs.
        Determine how many more runs team B
        needs to win the match.
      ======================================
    */
    std::cout << (X > Y ? X - Y : 0) << std::endl;
  }
  return 0;
}
