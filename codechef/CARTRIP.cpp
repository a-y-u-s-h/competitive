#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef has rented a car. Usually cost
        of the car is 10 per km, However since
        Chef has booked the car for a whole day,
        he needs to pay for at least 300km even
        if the car runs less than 300km.
        If the car ran Xkm, determine the cost
        Chef needs to pay.
      ======================================
    */
    int answer = (X <= 300) ? 300 * 10 : X * 10;
    std::cout << answer << std::endl;
  }
  return 0;
}
