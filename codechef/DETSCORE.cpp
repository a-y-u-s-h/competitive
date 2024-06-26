#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, N;
    std::cin >> X >> N;
    /*
      ======================================
        A problem is worth X points. Chef
        finds out that the problem has
        exactly 10 test cases. It is known that
        each test case is worth the same
        number of points. Chef passes N test
        cases among them. Determine the score
        that Chef will get. It is given that
        X is a multiple of 10.
      ======================================
    */

    int score = (X / 10) * N;
    std::cout << score << std::endl;

  }
  return 0;
}
