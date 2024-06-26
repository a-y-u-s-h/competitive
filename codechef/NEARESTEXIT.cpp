#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        There are 2 exits in a bus with 100 seats.
        1. 1st exit is located at seat 1.
        2. 2nd exit is located at seat 100.

        Seats are arranged in a straight line
        from 1 to 100 with equal spacing between
        any 2 adjacent seats. A passenger prefers
        to choose the nearest exit while leaving
        the bus. Determine the exit taken by passenger
        while leaving the bus.
      ======================================
    */
    std::string answer = std::abs(X - 1) > std::abs(100 - X) ? "RIGHT" : "LEFT";
    std::cout << answer << std::endl;
  }
  return 0;
}
