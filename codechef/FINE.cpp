#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef was driving on a highway at a
        speed of X km/hour. To avoid accidents,
        there are fine imposed on overspeeding as follows:
        1. Fine = 0     if X ≤ 70.
        2. Fine = 500   if X > 70 && X ≤ 100.
        3. Fine = 2000  if X > 100.
        Determine the fine that Chef needs to pay.
      ======================================
    */
    int fine = (X <= 70) ? 0 : (X > 70 && X <= 100) ? 500 : (X > 100) ? 2000 : 0;
    std::cout << fine << std::endl;
  }
  return 0;
}
