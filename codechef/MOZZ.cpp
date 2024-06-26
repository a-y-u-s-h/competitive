#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float X, Y, R;
    std::cin >> X >> Y >> R;
    /*
      ======================================
        Chef's colleague issued a challenge
        to Chef: If you eat more than X
        mozarella sticks, I'll give you Rs. 30,
        for each extra one you eat. You know that
        restaurant serves Y mozzarella sticks
        per plate. You also know that Chef received
        Rs. R from his colleague as a result of
        the challenge. What is the maximum number
        of plates of mozzarella sticks that Chef
        could have ordered?
      ======================================
    */
    int answer = std::ceil((X + (R / 30)) / Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
