#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    /*
      ======================================
        There are N+1 lights. Lights are placed
        at (0, 0), (1, 0), (2, 0), ... (N, 0).
        Initially, all the lights are on. You
        want to turn off all of them one
        after one. You want to follow a
        special pattern in turning off the lights.

        You will start at (0, 0). First, you
        walk to the right most light that is on,
        turn it off. Then, you walk to the left
        most light that is on, turn it off. Then
        again to the right most light and so on.
        You will stop after turning off all the
        lights. You want to know how much
        distance you walked in the process. Note
        that distance between (a, 0) and (b, 0)
        is |a - b|.
      ======================================
    */
    long long answer = ((N + 1) * (N + 2) / 2) - 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
