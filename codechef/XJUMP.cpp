#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef is currently standing at stair 0,
        and he wants to reach stair numberd X.
        Chef can climb either Y steps or 1
        step in one move. Find the minimum
        number of moves required by him to reach
        exactly the stair numbered X.

        +Y, +1
      ======================================
    */
    int answer = (X % Y == 0) ? X / Y : (X / Y) + (X % Y);
    std::cout << answer << std::endl;
  }
  return 0;
}
