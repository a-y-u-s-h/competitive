#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        A geyser has a capacity of X litres
        of water and a bucket has a capacity
        of Y litres of water. One person
        requires exactly 2 buckets of water
        to take a bath. Find the maximum
        number of people that can take a bath
        using water from one completely
        filled geyser.
      ======================================
    */
    int answer = X / (2 * Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
