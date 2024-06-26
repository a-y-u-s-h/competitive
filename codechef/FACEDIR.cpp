#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int X;
    std::cin >> X;

    /*
      ======================================
        Chef is current facing the north
        direction. Each second he rotates exactly
        90 degrees in clockwise direction.
        Find the direction in which Chef
        is facing after exactly X seconds.

        (North, East, South, West are the
        only directions, in clockwise order).

        After 1 second = East
        After 2 seconds = South
        After 3 seconds = West
        After 4 seconds = North
        After x seconds =
          | East  if x % 4 == 1
          | South if x % 4 == 2
          | West  if x % 4 == 3
          | North if x % 4 == 0
      ======================================
    */
    int direction = X % 4;
    if (direction == 1) std::cout << "East" << std::endl;
    if (direction == 2) std::cout << "South" << std::endl;
    if (direction == 3) std::cout << "West" << std::endl;
    if (direction == 0) std::cout << "North" << std::endl;
  }
  return 0;
}
