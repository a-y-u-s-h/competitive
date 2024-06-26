#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Valentine's Day is approaching and
        thus Chef wants to buy some chocolates
        for someone special. Chef has a total
        of X rupees and one chocolate costs Y
        rupees. What is the maximum number of
        chocolates Chef can buy?
      ======================================
    */
    int answer = X >= Y ? X / Y : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
