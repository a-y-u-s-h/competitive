#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Mario transforms each time he eats
        a mushroom as follows:
        1. If he's currently small, he turns normal.
        2. If he's currently normal, he turns huge.
        3. If he's currently huge, he turns small.
        Given that Mario was initially normal,
        find his size after eating X mushrooms.
      ======================================
    */
    std::string answer = std::abs(X - 1) % 3 == 0 ? "HUGE"
                       : std::abs(X - 2) % 3 == 0 ? "SMALL"
                       : std::abs(X - 3) % 3 == 0 ? "NORMAL" : "";
    std::cout << answer << std::endl;
}
  return 0;
}
