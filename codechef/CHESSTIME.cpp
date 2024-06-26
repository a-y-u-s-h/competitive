#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Playing one game of chess takes at least
        20 minutes of his time. Chef has N hours
        of free time. What is the maximum number
        of complete chess games that he can play
        in that time?
      ======================================
    */
    int answer = (N * 60) / 20;
    std::cout << answer << std::endl;
  }
  return 0;
}
