#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef has opened a new airline. Chef
        has 10 airplanes where each airplane
        has a capacity of X passengers.
        On the first day itself, Y people
        are willing to book a seat in any one of
        Chef's airplanes.

        Given that Chef charges Z rupees for
        each ticket, find the maximum amount he
        can earn on the first day.
      ======================================
    */
    int answer = (Y >= X * 10 ? X * 10 * Z : Y * Z);
    std::cout << answer << std::endl;
  }
  return 0;
}
