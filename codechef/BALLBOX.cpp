#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    /*
      ======================================
        You have N balls and K boxes. You
        want to divide N balls into K boxes
        such that - each box contains >= 1
        balls & no two boxes contain the same
        number of balls. Determine if it is
        possible to do so.
      ======================================
    */
    bool condition = N >= K * (K + 1) / 2;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
