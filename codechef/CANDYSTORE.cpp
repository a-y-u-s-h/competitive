#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has started working at the candy
        store. The store has 100 chocolates in
        total. Chef's daily goal is to sell X
        chocolates. For each chocolate sold,
        he will get Rs. 1. However, if Chef
        exceeds his daily goal, he gets Rs. 2
        per chocolate fore each extra chocolate.
        If Chef sells Y chocolates in a day,
        find the total amount he made.
      ======================================
    */
    int answer = (Y > X ? X + 2 * (Y - X) : Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
