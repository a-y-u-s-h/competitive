#include <iostream>

int main(int argc, char const *argv[]) {
  int A, B, X, Y;
  std::cin >> A >> B >> X >> Y;
  /*
    ======================================
      A football player gets 2 points for
      each goal and 1 point for each assist.
      Messi has A goals and B assists this
      season, whereas Ronaldo has X goals and
      Y assists. Find out the players with
      more points this season.
    ======================================
  */
  int M = (2 * A) + B;
  int R = (2 * X) + Y;
  std::cout << (M == R ? "Equal" : M < R ? "Ronaldo" : M > R ? "Messi" : "") << std::endl;
  return 0;
}
